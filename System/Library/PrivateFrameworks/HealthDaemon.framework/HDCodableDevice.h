/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface HDCodableDevice : PBCodable <NSCopying> {

	double _creationDate;
	NSString* _fDAUDI;
	NSString* _firmwareVersion;
	NSString* _hardwareVersion;
	NSString* _localIdentifier;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _name;
	NSString* _softwareVersion;
	NSData* _uuid;
	SCD_Struct_HD7 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasManufacturer; 
@property (nonatomic,retain) NSString * manufacturer;                 //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) BOOL hasModel; 
@property (nonatomic,retain) NSString * model;                        //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) BOOL hasHardwareVersion; 
@property (nonatomic,retain) NSString * hardwareVersion;              //@synthesize hardwareVersion=_hardwareVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasFirmwareVersion; 
@property (nonatomic,retain) NSString * firmwareVersion;              //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasSoftwareVersion; 
@property (nonatomic,retain) NSString * softwareVersion;              //@synthesize softwareVersion=_softwareVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalIdentifier; 
@property (nonatomic,retain) NSString * localIdentifier;              //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasFDAUDI; 
@property (nonatomic,retain) NSString * fDAUDI;                       //@synthesize fDAUDI=_fDAUDI - In the implementation block
@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSData * uuid;                           //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasCreationDate; 
@property (assign,nonatomic) double creationDate;                     //@synthesize creationDate=_creationDate - In the implementation block
-(NSString *)localIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)model;
-(NSString *)manufacturer;
-(void)setUuid:(NSData *)arg1 ;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)firmwareVersion;
-(BOOL)hasUuid;
-(BOOL)hasName;
-(id)dictionaryRepresentation;
-(void)setCreationDate:(double)arg1 ;
-(NSString *)fDAUDI;
-(void)setSoftwareVersion:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(BOOL)hasModel;
-(BOOL)isEqual:(id)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(NSData *)uuid;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasCreationDate;
-(NSString *)hardwareVersion;
-(void)setLocalIdentifier:(NSString *)arg1 ;
-(void)setManufacturer:(NSString *)arg1 ;
-(BOOL)hasManufacturer;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(BOOL)hasFirmwareVersion;
-(void)writeTo:(id)arg1 ;
-(double)creationDate;
-(NSString *)softwareVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setHardwareVersion:(NSString *)arg1 ;
-(void)setFDAUDI:(NSString *)arg1 ;
-(BOOL)hasHardwareVersion;
-(BOOL)hasSoftwareVersion;
-(BOOL)hasLocalIdentifier;
-(BOOL)hasFDAUDI;
@end
