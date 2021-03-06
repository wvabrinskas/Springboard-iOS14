/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INCarHeadUnit, NSArray;

@interface INCar : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _carIdentifier;
	NSString* _displayName;
	NSString* _year;
	NSString* _make;
	NSString* _model;
	CGColorRef _color;
	INCarHeadUnit* _headUnit;
	NSArray* _supportedChargingConnectors;
	NSArray* _powerPerConnectors;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * powerPerConnectors;                       //@synthesize powerPerConnectors=_powerPerConnectors - In the implementation block
@property (nonatomic,copy,readonly) NSString * carIdentifier;                           //@synthesize carIdentifier=_carIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                             //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * year;                                    //@synthesize year=_year - In the implementation block
@property (nonatomic,copy,readonly) NSString * make;                                    //@synthesize make=_make - In the implementation block
@property (nonatomic,copy,readonly) NSString * model;                                   //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) CGColorRef color;                                        //@synthesize color=_color - In the implementation block
@property (nonatomic,copy,readonly) INCarHeadUnit * headUnit;                           //@synthesize headUnit=_headUnit - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportedChargingConnectors;              //@synthesize supportedChargingConnectors=_supportedChargingConnectors - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSString *)make;
-(NSString *)year;
-(NSString *)model;
-(id)initWithCarIdentifier:(id)arg1 displayName:(id)arg2 year:(id)arg3 make:(id)arg4 model:(id)arg5 color:(CGColorRef)arg6 headUnit:(id)arg7 supportedChargingConnectors:(id)arg8 powerPerConnectors:(id)arg9 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(NSString *)displayName;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(INCarHeadUnit *)headUnit;
-(NSArray *)powerPerConnectors;
-(NSArray *)supportedChargingConnectors;
-(void)setMaximumPower:(id)arg1 forChargingConnectorType:(id)arg2 ;
-(id)_colorDictionaryRepresentation;
-(id)initWithCarIdentifier:(id)arg1 displayName:(id)arg2 year:(id)arg3 make:(id)arg4 model:(id)arg5 color:(CGColorRef)arg6 headUnit:(id)arg7 supportedChargingConnectors:(id)arg8 ;
-(id)maximumPowerForChargingConnectorType:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)carIdentifier;
-(CGColorRef)color;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

