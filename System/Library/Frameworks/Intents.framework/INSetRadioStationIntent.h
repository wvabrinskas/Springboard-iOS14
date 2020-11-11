/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetRadioStationIntentExport.h>

@class NSNumber, NSString;

@interface INSetRadioStationIntent : INIntent <INSetRadioStationIntentExport>

@property (nonatomic,readonly) long long radioType; 
@property (nonatomic,copy,readonly) NSNumber * frequency; 
@property (nonatomic,copy,readonly) NSString * stationName; 
@property (nonatomic,copy,readonly) NSString * channel; 
@property (nonatomic,copy,readonly) NSNumber * presetNumber; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(NSNumber *)frequency;
-(NSString *)channel;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(NSString *)stationName;
-(void)setFrequency:(NSNumber *)arg1 ;
-(void)setVerb:(id)arg1 ;
-(void)setChannel:(NSString *)arg1 ;
-(void)setStationName:(NSString *)arg1 ;
-(NSNumber *)presetNumber;
-(void)setPresetNumber:(NSNumber *)arg1 ;
-(id)initWithRadioType:(long long)arg1 frequency:(id)arg2 stationName:(id)arg3 channel:(id)arg4 presetNumber:(id)arg5 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setRadioType:(long long)arg1 ;
-(id)domain;
-(long long)radioType;
@end
