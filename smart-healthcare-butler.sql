/*
 Navicat Premium Data Transfer

 Source Server         : Mysql
 Source Server Type    : MySQL
 Source Server Version : 80036
 Source Host           : localhost:3306
 Source Schema         : smart-healthcare-butler

 Target Server Type    : MySQL
 Target Server Version : 80036
 File Encoding         : 65001

 Date: 02/06/2024 16:51:18
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for appointments
-- ----------------------------
DROP TABLE IF EXISTS `appointments`;
CREATE TABLE `appointments`  (
  `AppointmentID` int NOT NULL,
  `UserID` int NULL DEFAULT NULL,
  `AppointmentTime` datetime NULL DEFAULT NULL,
  `AppointmentStatus` enum('scheduled','cancelled','completed') CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `AppointmentReason` text CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL,
  `DoctorID` int NULL DEFAULT NULL,
  PRIMARY KEY (`AppointmentID`) USING BTREE,
  INDEX `UserID`(`UserID` ASC) USING BTREE,
  INDEX `DoctorID`(`DoctorID` ASC) USING BTREE,
  CONSTRAINT `appointments_ibfk_1` FOREIGN KEY (`UserID`) REFERENCES `patients` (`UserID`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `appointments_ibfk_2` FOREIGN KEY (`DoctorID`) REFERENCES `doctors` (`UserID`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE = InnoDB CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of appointments
-- ----------------------------
INSERT INTO `appointments` VALUES (2, 4, '2024-05-16 11:48:20', 'scheduled', '过敏测试', 1);
INSERT INTO `appointments` VALUES (3, 6, '2024-05-17 09:49:49', 'completed', '糖尿病复查', 1);
INSERT INTO `appointments` VALUES (4, 8, '2024-05-18 14:50:23', 'cancelled', '高血压随访', 1);
INSERT INTO `appointments` VALUES (5, 10, '2024-05-19 15:50:52', 'scheduled', '常规体检', 3);
INSERT INTO `appointments` VALUES (6, 2, '2024-05-20 10:30:12', 'completed', '头痛检查', 1);
INSERT INTO `appointments` VALUES (7, 4, '2024-05-21 11:52:42', 'cancelled', '胃痛检查', 1);
INSERT INTO `appointments` VALUES (8, 6, '2024-05-22 09:22:24', 'cancelled', '皮疹复查', 9);
INSERT INTO `appointments` VALUES (9, 8, '2024-05-23 14:53:39', 'completed', '心电图检查', 1);
INSERT INTO `appointments` VALUES (10, 10, '2024-05-24 15:15:03', 'scheduled', '牙痛检查', 7);

-- ----------------------------
-- Table structure for departments
-- ----------------------------
DROP TABLE IF EXISTS `departments`;
CREATE TABLE `departments`  (
  `DepartmentID` int NOT NULL,
  `DepartmentName` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `Location` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `DepartmentPhone` varchar(20) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  PRIMARY KEY (`DepartmentID`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of departments
-- ----------------------------
INSERT INTO `departments` VALUES (1, '内科', '一楼101室', '010-12345678');
INSERT INTO `departments` VALUES (2, '外科', '二楼202室', '010-23456789');
INSERT INTO `departments` VALUES (3, '儿科', '三楼303室', '010-34567890');
INSERT INTO `departments` VALUES (4, '妇产科', '四楼404室', '010-45678901');
INSERT INTO `departments` VALUES (5, '骨科', '五楼505室', '010-56789012');
INSERT INTO `departments` VALUES (6, '眼科', '一楼106室', '010-67890123');
INSERT INTO `departments` VALUES (7, '耳鼻喉科', '二楼207室', '010-78901234');
INSERT INTO `departments` VALUES (8, '皮肤科', '三楼308室', '010-89012345');
INSERT INTO `departments` VALUES (9, '口腔科', '四楼409室', '010-90123456');
INSERT INTO `departments` VALUES (10, '精神科', '五楼510室', '010-01234567');

-- ----------------------------
-- Table structure for doctors
-- ----------------------------
DROP TABLE IF EXISTS `doctors`;
CREATE TABLE `doctors`  (
  `UserID` int NOT NULL,
  `WorkHours` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `Level` enum('Junior','Intermediate','Senior') CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `DepartmentID` int NULL DEFAULT NULL,
  `Name` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `Password` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `ContactPhone` varchar(20) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `Gender` enum('male','female') CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  PRIMARY KEY (`UserID`) USING BTREE,
  INDEX `DepartmentID`(`DepartmentID` ASC) USING BTREE,
  CONSTRAINT `doctors_ibfk_2` FOREIGN KEY (`DepartmentID`) REFERENCES `departments` (`DepartmentID`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE = InnoDB CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of doctors
-- ----------------------------
INSERT INTO `doctors` VALUES (1, '9:00-17:00', 'Senior', 1, '张三', 'password123', '13366665231', 'male');
INSERT INTO `doctors` VALUES (3, '10:00-18:00', 'Intermediate', 2, '王五', 'password789', '13366665233', 'male');
INSERT INTO `doctors` VALUES (5, '8:00-16:00', 'Junior', 3, '钱七', 'password345', '13366665235', 'female');
INSERT INTO `doctors` VALUES (7, '9:00-17:00', 'Senior', 4, '周九', 'password901', '13366665237', 'female');
INSERT INTO `doctors` VALUES (9, '11:00-19:00', 'Intermediate', 8, '郑十一', 'password567', '13366665239', 'female');

-- ----------------------------
-- Table structure for insurance_payments
-- ----------------------------
DROP TABLE IF EXISTS `insurance_payments`;
CREATE TABLE `insurance_payments`  (
  `InsurancePaymentID` int NOT NULL AUTO_INCREMENT,
  `UserID` int NULL DEFAULT NULL,
  `PaymentRecordID` int NULL DEFAULT NULL,
  `ClaimStatus` enum('pending','approved','rejected') CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  PRIMARY KEY (`InsurancePaymentID`) USING BTREE,
  INDEX `UserID`(`UserID` ASC) USING BTREE,
  INDEX `PaymentRecordID`(`PaymentRecordID` ASC) USING BTREE,
  CONSTRAINT `insurance_payments_ibfk_1` FOREIGN KEY (`UserID`) REFERENCES `patients` (`UserID`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `insurance_payments_ibfk_2` FOREIGN KEY (`PaymentRecordID`) REFERENCES `paymentrecords` (`PaymentRecordID`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE = InnoDB AUTO_INCREMENT = 11 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of insurance_payments
-- ----------------------------
INSERT INTO `insurance_payments` VALUES (1, 2, 1, 'approved');
INSERT INTO `insurance_payments` VALUES (2, 2, 6, 'approved');
INSERT INTO `insurance_payments` VALUES (3, 4, 2, 'approved');
INSERT INTO `insurance_payments` VALUES (4, 4, 7, 'approved');
INSERT INTO `insurance_payments` VALUES (5, 6, 3, 'approved');
INSERT INTO `insurance_payments` VALUES (6, 6, 8, 'approved');
INSERT INTO `insurance_payments` VALUES (7, 8, 4, 'approved');
INSERT INTO `insurance_payments` VALUES (8, 8, 9, 'approved');
INSERT INTO `insurance_payments` VALUES (9, 10, 5, 'approved');
INSERT INTO `insurance_payments` VALUES (10, 10, 10, 'approved');

-- ----------------------------
-- Table structure for labresults
-- ----------------------------
DROP TABLE IF EXISTS `labresults`;
CREATE TABLE `labresults`  (
  `LabResultID` int NOT NULL,
  `MedicalRecordID` int NULL DEFAULT NULL,
  `TestType` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `Result` text CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL,
  `TestDate` date NULL DEFAULT NULL,
  PRIMARY KEY (`LabResultID`) USING BTREE,
  INDEX `MedicalRecordID`(`MedicalRecordID` ASC) USING BTREE,
  CONSTRAINT `labresults_ibfk_1` FOREIGN KEY (`MedicalRecordID`) REFERENCES `medicalrecords` (`MedicalRecordID`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE = InnoDB CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of labresults
-- ----------------------------
INSERT INTO `labresults` VALUES (1, 1, '血常规', '白细胞计数正常', '2024-05-01');
INSERT INTO `labresults` VALUES (2, 2, '胃镜检查', '发现胃炎', '2024-05-02');
INSERT INTO `labresults` VALUES (3, 3, '过敏原测试', '对花粉过敏', '2024-05-03');
INSERT INTO `labresults` VALUES (4, 4, '心电图', '心脏正常', '2024-05-04');
INSERT INTO `labresults` VALUES (5, 5, '牙科X光', '牙龈炎症', '2024-05-05');
INSERT INTO `labresults` VALUES (7, 7, '体温检测', '体温正常', '2024-05-06');
INSERT INTO `labresults` VALUES (8, 8, '胸部X光', '轻微感染', '2024-05-07');
INSERT INTO `labresults` VALUES (9, 9, '皮肤活检', '无异常', '2024-05-08');

-- ----------------------------
-- Table structure for medicalrecords
-- ----------------------------
DROP TABLE IF EXISTS `medicalrecords`;
CREATE TABLE `medicalrecords`  (
  `MedicalRecordID` int NOT NULL AUTO_INCREMENT,
  `DoctorNotes` text CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL,
  `Treatment` text CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL,
  `DiagnosisResult` text CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL,
  `VisitDate` date NULL DEFAULT NULL,
  `UserID` int NULL DEFAULT NULL,
  PRIMARY KEY (`MedicalRecordID`) USING BTREE,
  INDEX `UserID`(`UserID` ASC) USING BTREE,
  CONSTRAINT `medicalrecords_ibfk_1` FOREIGN KEY (`UserID`) REFERENCES `patients` (`UserID`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE = InnoDB AUTO_INCREMENT = 23 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of medicalrecords
-- ----------------------------
INSERT INTO `medicalrecords` VALUES (1, '患者报告有轻微头痛', '开具阿莫西林处方', '细菌感染', '2024-05-01', 2);
INSERT INTO `medicalrecords` VALUES (2, '患者抱怨胃痛', '开具布洛芬处方', '胃炎', '2024-05-02', 4);
INSERT INTO `medicalrecords` VALUES (3, '患者有轻微皮疹', '开具氯雷他定处方', '过敏反应', '2024-05-03', 6);
INSERT INTO `medicalrecords` VALUES (4, '患者有胸痛', '开具阿司匹林处方', '心脏问题', '2024-05-04', 8);
INSERT INTO `medicalrecords` VALUES (5, '患者有牙痛', '开具甲硝唑处方', '牙龈感染', '2024-05-05', 10);
INSERT INTO `medicalrecords` VALUES (6, '患者有喉咙痛', '开具青霉素处方', '咽喉感染', '2024-05-06', 2);
INSERT INTO `medicalrecords` VALUES (7, '患者有发烧', '开具对乙酰氨基酚处方', '感冒', '2024-05-07', 4);
INSERT INTO `medicalrecords` VALUES (8, '患者有咳嗽', '开具头孢克洛处方', '呼吸道感染', '2024-05-08', 6);
INSERT INTO `medicalrecords` VALUES (9, '患者有皮肤发炎', '开具地塞米松处方', '皮肤炎症', '2024-05-09', 8);
INSERT INTO `medicalrecords` VALUES (10, '患者有结核病症状', '开具利福平处方', '结核病', '2024-05-10', 10);
INSERT INTO `medicalrecords` VALUES (16, '按时吃饭', '输葡萄糖', '低血糖', '2024-05-30', 11);
INSERT INTO `medicalrecords` VALUES (18, '', '喝阿莫西林', '上火', '2024-03-06', 11);
INSERT INTO `medicalrecords` VALUES (19, '多休息', '喝阿莫西林', '普通感冒', '2024-05-16', 2);
INSERT INTO `medicalrecords` VALUES (22, '不要熬夜', '吃甘草片', '上火咳嗽', '2024-01-02', 6);

-- ----------------------------
-- Table structure for patients
-- ----------------------------
DROP TABLE IF EXISTS `patients`;
CREATE TABLE `patients`  (
  `UserID` int NOT NULL,
  `EmergencyContact` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `MedicalHistory` text CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL,
  `Name` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `Password` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `ContactPhone` varchar(20) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `Gender` enum('male','female') CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  PRIMARY KEY (`UserID`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of patients
-- ----------------------------
INSERT INTO `patients` VALUES (2, '张伟, 13366665250', '无重大病史', '李四', 'password456', '13366665232', 'female');
INSERT INTO `patients` VALUES (4, '刘芳, 13366665251', '过敏史', '赵六', 'password012', '13366665234', 'male');
INSERT INTO `patients` VALUES (6, '王磊, 13366665252', '糖尿病', '孙八', 'password678', '13366665236', 'male');
INSERT INTO `patients` VALUES (8, '李娜, 13366665253', '高血压', '吴十', 'password234', '13366665238', 'female');
INSERT INTO `patients` VALUES (10, '赵强, 13366665254', '无重大病史', '王十二', 'password890', '13366665230', 'male');
INSERT INTO `patients` VALUES (11, '刘加，16655552241', '无', '贾及', 'password111', '16622336655', 'male');

-- ----------------------------
-- Table structure for paymentrecords
-- ----------------------------
DROP TABLE IF EXISTS `paymentrecords`;
CREATE TABLE `paymentrecords`  (
  `PaymentRecordID` int NOT NULL,
  `UserID` int NULL DEFAULT NULL,
  `Amount` decimal(10, 2) NULL DEFAULT NULL,
  `PaymentMethod` enum('cash','card','online') CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `PaymentStatus` enum('paid','unpaid') CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `PaymentDate` date NULL DEFAULT NULL,
  PRIMARY KEY (`PaymentRecordID`) USING BTREE,
  INDEX `UserID`(`UserID` ASC) USING BTREE,
  CONSTRAINT `paymentrecords_ibfk_1` FOREIGN KEY (`UserID`) REFERENCES `patients` (`UserID`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE = InnoDB CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of paymentrecords
-- ----------------------------
INSERT INTO `paymentrecords` VALUES (1, 2, 150.00, 'cash', 'paid', '2024-05-01');
INSERT INTO `paymentrecords` VALUES (2, 4, 200.00, 'card', 'paid', '2024-05-02');
INSERT INTO `paymentrecords` VALUES (3, 6, 100.00, 'online', 'paid', '2024-05-03');
INSERT INTO `paymentrecords` VALUES (4, 8, 250.00, 'cash', 'paid', '2024-05-04');
INSERT INTO `paymentrecords` VALUES (5, 10, 300.00, 'card', 'paid', '2024-05-05');
INSERT INTO `paymentrecords` VALUES (6, 2, 120.00, 'online', 'paid', '2024-05-06');
INSERT INTO `paymentrecords` VALUES (7, 4, 180.00, 'cash', 'paid', '2024-05-07');
INSERT INTO `paymentrecords` VALUES (8, 6, 220.00, 'card', 'paid', '2024-05-08');
INSERT INTO `paymentrecords` VALUES (9, 8, 260.00, 'online', 'paid', '2024-05-09');
INSERT INTO `paymentrecords` VALUES (10, 10, 310.00, 'cash', 'paid', '2024-05-10');

-- ----------------------------
-- Table structure for prescriptions
-- ----------------------------
DROP TABLE IF EXISTS `prescriptions`;
CREATE TABLE `prescriptions`  (
  `PrescriptionID` int NOT NULL AUTO_INCREMENT,
  `MedicalRecordID` int NULL DEFAULT NULL,
  `MedicineName` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `Dosage` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `Frequency` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `DispenseDate` date NULL DEFAULT NULL,
  PRIMARY KEY (`PrescriptionID`) USING BTREE,
  INDEX `MedicalRecordID`(`MedicalRecordID` ASC) USING BTREE,
  CONSTRAINT `prescriptions_ibfk_1` FOREIGN KEY (`MedicalRecordID`) REFERENCES `medicalrecords` (`MedicalRecordID`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE = InnoDB AUTO_INCREMENT = 17 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of prescriptions
-- ----------------------------
INSERT INTO `prescriptions` VALUES (1, 1, '阿莫西林', '500mg', '每天三次', '2024-05-01');
INSERT INTO `prescriptions` VALUES (2, 2, '布洛芬', '200mg', '每天两次', '2024-05-02');
INSERT INTO `prescriptions` VALUES (3, 3, '氯雷他定', '10mg', '每天一次', '2024-05-03');
INSERT INTO `prescriptions` VALUES (4, 4, '阿司匹林', '100mg', '每天一次', '2024-05-04');
INSERT INTO `prescriptions` VALUES (5, 5, '甲硝唑', '250mg', '每天两次', '2024-05-05');
INSERT INTO `prescriptions` VALUES (6, 6, '青霉素', '1g', '每天一次', '2024-05-06');
INSERT INTO `prescriptions` VALUES (7, 7, '对乙酰氨基酚', '500mg', '每天一次', '2024-05-07');
INSERT INTO `prescriptions` VALUES (8, 8, '头孢克洛', '500mg', '每天两次', '2024-05-08');
INSERT INTO `prescriptions` VALUES (9, 9, '地塞米松', '0.75mg', '每天一次', '2024-05-09');
INSERT INTO `prescriptions` VALUES (10, 10, '利福平', '500mg', '每天一次', '2024-05-10');
INSERT INTO `prescriptions` VALUES (11, 16, '默认药品_11', '默认剂量_11', '默认频率_11', '2024-05-30');
INSERT INTO `prescriptions` VALUES (12, 18, '默认药品_12', '默认剂量_12', '默认频率_12', '2024-05-30');
INSERT INTO `prescriptions` VALUES (13, 19, '默认药品_13', '默认剂量_13', '默认频率_13', '2024-05-30');
INSERT INTO `prescriptions` VALUES (16, 22, '默认药品_16', '默认剂量_16', '默认频率_16', '2024-05-30');

-- ----------------------------
-- Table structure for teleconsultations
-- ----------------------------
DROP TABLE IF EXISTS `teleconsultations`;
CREATE TABLE `teleconsultations`  (
  `TeleconsultationID` int NOT NULL AUTO_INCREMENT,
  `AppointmentID` int NULL DEFAULT NULL,
  `ConsultantID` int NULL DEFAULT NULL,
  `ConsultationNotes` text CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL,
  PRIMARY KEY (`TeleconsultationID`) USING BTREE,
  INDEX `AppointmentID`(`AppointmentID` ASC) USING BTREE,
  INDEX `ConsultantID`(`ConsultantID` ASC) USING BTREE,
  CONSTRAINT `teleconsultations_ibfk_1` FOREIGN KEY (`AppointmentID`) REFERENCES `appointments` (`AppointmentID`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `teleconsultations_ibfk_2` FOREIGN KEY (`ConsultantID`) REFERENCES `doctors` (`UserID`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE = InnoDB AUTO_INCREMENT = 11 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of teleconsultations
-- ----------------------------
INSERT INTO `teleconsultations` VALUES (2, 2, 1, NULL);
INSERT INTO `teleconsultations` VALUES (3, 3, 1, NULL);
INSERT INTO `teleconsultations` VALUES (4, 4, 1, NULL);
INSERT INTO `teleconsultations` VALUES (5, 5, 3, NULL);
INSERT INTO `teleconsultations` VALUES (6, 6, 1, NULL);
INSERT INTO `teleconsultations` VALUES (7, 7, 1, NULL);
INSERT INTO `teleconsultations` VALUES (8, 8, 9, NULL);
INSERT INTO `teleconsultations` VALUES (9, 9, 1, NULL);
INSERT INTO `teleconsultations` VALUES (10, 10, 7, NULL);

-- ----------------------------
-- View structure for appointment_details
-- ----------------------------
DROP VIEW IF EXISTS `appointment_details`;
CREATE ALGORITHM = UNDEFINED SQL SECURITY DEFINER VIEW `appointment_details` AS select `a`.`AppointmentID` AS `AppointmentID`,`a`.`AppointmentTime` AS `AppointmentTime`,`a`.`AppointmentStatus` AS `AppointmentStatus`,`a`.`AppointmentReason` AS `AppointmentReason`,`p`.`Name` AS `PatientName`,`p`.`ContactPhone` AS `PatientContactPhone`,`p`.`Gender` AS `PatientGender` from (`appointments` `a` join `patients` `p` on((`a`.`UserID` = `p`.`UserID`)));

-- ----------------------------
-- View structure for patient_appointment
-- ----------------------------
DROP VIEW IF EXISTS `patient_appointment`;
CREATE ALGORITHM = UNDEFINED SQL SECURITY DEFINER VIEW `patient_appointment` AS select `patients`.`Name` AS `Name`,`appointments`.`AppointmentID` AS `AppointmentID`,`appointments`.`AppointmentTime` AS `AppointmentTime`,`appointments`.`AppointmentStatus` AS `AppointmentStatus`,`appointments`.`AppointmentReason` AS `AppointmentReason` from (`appointments` join `patients` on((`appointments`.`UserID` = `patients`.`UserID`)));

-- ----------------------------
-- Procedure structure for UpdatePaymentStatus
-- ----------------------------
DROP PROCEDURE IF EXISTS `UpdatePaymentStatus`;
delimiter ;;
CREATE PROCEDURE `UpdatePaymentStatus`(IN paymentRecordID INT, IN newClaimStatus ENUM('pending','approved','rejected'))
BEGIN
    -- 验证新状态是否合法
    IF newClaimStatus NOT IN ('pending', 'approved', 'rejected') THEN
        SIGNAL SQLSTATE '45000' SET MESSAGE_TEXT = 'Invalid claim status';
    END IF;

    -- 更新 insurance_payments 表中的 ClaimStatus
    UPDATE insurance_payments
    SET ClaimStatus = newClaimStatus
    WHERE PaymentRecordID = paymentRecordID;

    -- 根据 ClaimStatus 更新 paymentrecords 表中的 PaymentStatus
    IF newClaimStatus = 'approved' THEN
        UPDATE paymentrecords
        SET PaymentStatus = 'paid'
        WHERE PaymentRecordID = paymentRecordID;
    ELSE
        UPDATE paymentrecords
        SET PaymentStatus = 'unpaid'
        WHERE PaymentRecordID = paymentRecordID;
    END IF;
END
;;
delimiter ;

-- ----------------------------
-- Triggers structure for table medicalrecords
-- ----------------------------
DROP TRIGGER IF EXISTS `add_prescription_on_medical_record_insert`;
delimiter ;;
CREATE TRIGGER `add_prescription_on_medical_record_insert` AFTER INSERT ON `medicalrecords` FOR EACH ROW BEGIN
    DECLARE prescription_id INT;
    
    -- 插入到处方表中
    INSERT INTO prescriptions (MedicalRecordID, MedicineName, Dosage, Frequency, DispenseDate)
    VALUES (NEW.MedicalRecordID, '默认药品', '默认剂量', '默认频率', CURDATE());
    
    -- 获取自动生成的PrescriptionID
    SELECT LAST_INSERT_ID() INTO prescription_id;
    
    -- 使用自动生成的PrescriptionID更新处方记录
    UPDATE prescriptions SET MedicineName = CONCAT('默认药品_', prescription_id), 
                              Dosage = CONCAT('默认剂量_', prescription_id), 
                              Frequency = CONCAT('默认频率_', prescription_id)
    WHERE PrescriptionID = prescription_id;
END
;;
delimiter ;

-- ----------------------------
-- Triggers structure for table medicalrecords
-- ----------------------------
DROP TRIGGER IF EXISTS `mmedical_record_insert_integrity_check`;
delimiter ;;
CREATE TRIGGER `mmedical_record_insert_integrity_check` BEFORE INSERT ON `medicalrecords` FOR EACH ROW BEGIN
    DECLARE user_exists INT;
    
    -- 检查 UserID 是否存在于 patients 表中
    SELECT COUNT(*) INTO user_exists FROM patients WHERE UserID = NEW.UserID;
    
    IF user_exists = 0 THEN
        SIGNAL SQLSTATE '45000'
        SET MESSAGE_TEXT = '插入的 UserID 在 patients 表中不存在';
    END IF;
		
END
;;
delimiter ;

-- ----------------------------
-- Triggers structure for table medicalrecords
-- ----------------------------
DROP TRIGGER IF EXISTS `visittime`;
delimiter ;;
CREATE TRIGGER `visittime` BEFORE INSERT ON `medicalrecords` FOR EACH ROW BEGIN
    -- 检查 VisitDate 是否为空
    IF NEW.VisitDate IS NULL OR NEW.VisitDate = '' THEN
        SIGNAL SQLSTATE '45000'
        SET MESSAGE_TEXT = 'VisitDate 不能为空';
    END IF;
    
    -- 检查 VisitDate 格式是否正确
    IF NEW.VisitDate NOT REGEXP '^[0-9]{4}-[0-9]{2}-[0-9]{2}$' THEN
        SIGNAL SQLSTATE '45000'
        SET MESSAGE_TEXT = 'VisitDate 格式无效，应为 YYYY-MM-DD';
    END IF;

END
;;
delimiter ;

SET FOREIGN_KEY_CHECKS = 1;
