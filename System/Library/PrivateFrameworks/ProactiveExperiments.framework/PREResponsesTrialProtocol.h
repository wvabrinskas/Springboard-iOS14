/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol PREResponsesTrialProtocol
@property (readonly) NSString * inferenceModelName; 
@property (readonly) NSString * inferenceModelFilePath; 
@property (readonly) NSString * inferenceModelConfigPath; 
@property (readonly) NSString * espressoBinFilePath; 
@property (readonly) NSString * lexiconFilePath; 
@property (readonly) NSString * experimentId; 
@property (readonly) NSString * treatmentId; 
@required
-(NSString *)treatmentId;
-(NSString *)experimentId;
-(NSString *)inferenceModelConfigPath;
-(NSString *)espressoBinFilePath;
-(NSString *)inferenceModelFilePath;
-(NSString *)inferenceModelName;
-(NSString *)lexiconFilePath;

@end

