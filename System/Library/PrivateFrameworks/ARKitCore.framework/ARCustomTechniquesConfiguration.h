/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARConfiguration.h>

@class NSArray, ARConfiguration, ARWorldMap;

@interface ARCustomTechniquesConfiguration : ARConfiguration {

	NSArray* _techniques;
	ARConfiguration* _templateConfiguration;

}

@property (nonatomic,copy) NSArray * techniques;                                 //@synthesize techniques=_techniques - In the implementation block
@property (nonatomic,readonly) ARWorldMap * initialWorldMap; 
@property (nonatomic,copy) ARConfiguration * templateConfiguration;              //@synthesize templateConfiguration=_templateConfiguration - In the implementation block
+(id)new;
+(id)supportedVideoFormats;
-(id)initPrivate;
-(id)init;
-(void)setVideoFormat:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCameraPosition:(long long)arg1 ;
-(ARWorldMap *)initialWorldMap;
-(long long)worldAlignment;
-(id)imageSensorSettings;
-(id)imageSensorSettingsForUltraWide;
-(NSArray *)techniques;
-(ARConfiguration *)templateConfiguration;
-(void)setCustomSensors:(id)arg1 ;
-(BOOL)isLightEstimationEnabled;
-(void)setProvidesAudioData:(BOOL)arg1 ;
-(void)setTechniques:(NSArray *)arg1 ;
-(void)setTemplateConfiguration:(ARConfiguration *)arg1 ;
-(void)ensureTechniqueAndCustomSensorCompatibility;
-(void)configureRecordingTechnique;
-(void)_updateCaptureSettings;
@end

