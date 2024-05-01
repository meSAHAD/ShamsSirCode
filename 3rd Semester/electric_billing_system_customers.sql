-- MySQL dump 10.13  Distrib 8.0.34, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: electric_billing_system
-- ------------------------------------------------------
-- Server version	8.0.35

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `customers`
--

DROP TABLE IF EXISTS `customers`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `customers` (
  `CustomerID` int NOT NULL AUTO_INCREMENT,
  `Name` varchar(255) DEFAULT NULL,
  `Address` varchar(255) DEFAULT NULL,
  `Phone_Number` varchar(15) DEFAULT NULL,
  `Email` varchar(255) DEFAULT NULL,
  `Connection_Date` date DEFAULT NULL,
  `RegionID` int DEFAULT NULL,
  PRIMARY KEY (`CustomerID`),
  KEY `RegionID` (`RegionID`),
  CONSTRAINT `customers_ibfk_1` FOREIGN KEY (`RegionID`) REFERENCES `region` (`RegionID`)
) ENGINE=InnoDB AUTO_INCREMENT=26 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `customers`
--

LOCK TABLES `customers` WRITE;
/*!40000 ALTER TABLE `customers` DISABLE KEYS */;
INSERT INTO `customers` VALUES (1,'John Doe','123 Main Street, Cityville','123-456-7890','john@example.com','2023-05-10',1),(2,'Jane Smith','456 Oak Avenue, Townsville','987-654-3210','jane@example.com','2022-12-15',2),(3,'Michael Johnson','789 Elm Road, Villagetown','555-123-4567','michael@example.com','2023-02-20',3),(4,'Emily Davis','101 Pine Lane, Hamletville','111-222-3333','emily@example.com','2023-08-03',4),(5,'Robert Wilson','222 Cedar Drive, Countryside','999-888-7777','robert@example.com','2022-10-01',1),(6,'John Doe','123 Main Street, Cityville','123-456-7890','john@example.com','2023-05-10',1),(7,'Jane Smith','456 Oak Avenue, Townsville','987-654-3210','jane@example.com','2022-12-15',2),(8,'Michael Johnson','789 Elm Road, Villagetown','555-123-4567','michael@example.com','2023-02-20',3),(9,'Emily Davis','101 Pine Lane, Hamletville','111-222-3333','emily@example.com','2023-08-03',4),(10,'Robert Wilson','222 Cedar Drive, Countryside','999-888-7777','robert@example.com','2022-10-01',1),(11,'John Doe','123 Main Street, Cityville','123-456-7890','john@example.com','2023-05-10',1),(12,'Jane Smith','456 Oak Avenue, Townsville','987-654-3210','jane@example.com','2022-12-15',2),(13,'Michael Johnson','789 Elm Road, Villagetown','555-123-4567','michael@example.com','2023-02-20',3),(14,'Emily Davis','101 Pine Lane, Hamletville','111-222-3333','emily@example.com','2023-08-03',4),(15,'Robert Wilson','222 Cedar Drive, Countryside','999-888-7777','robert@example.com','2022-10-01',1),(16,'John Doe','123 Main Street, Cityville','123-456-7890','john@example.com','2023-05-10',1),(17,'Jane Smith','456 Oak Avenue, Townsville','987-654-3210','jane@example.com','2022-12-15',2),(18,'Michael Johnson','789 Elm Road, Villagetown','555-123-4567','michael@example.com','2023-02-20',3),(19,'Emily Davis','101 Pine Lane, Hamletville','111-222-3333','emily@example.com','2023-08-03',4),(20,'Robert Wilson','222 Cedar Drive, Countryside','999-888-7777','robert@example.com','2022-10-01',1),(21,'John Doe','123 Main Street, Cityville','123-456-7890','john@example.com','2023-05-10',1),(22,'Jane Smith','456 Oak Avenue, Townsville','987-654-3210','jane@example.com','2022-12-15',2),(23,'Michael Johnson','789 Elm Road, Villagetown','555-123-4567','michael@example.com','2023-02-20',3),(24,'Emily Davis','101 Pine Lane, Hamletville','111-222-3333','emily@example.com','2023-08-03',4),(25,'Robert Wilson','222 Cedar Drive, Countryside','999-888-7777','robert@example.com','2022-10-01',1);
/*!40000 ALTER TABLE `customers` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2024-03-22 19:57:59
