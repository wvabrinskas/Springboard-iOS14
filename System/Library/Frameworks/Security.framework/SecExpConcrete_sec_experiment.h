/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Security.framework/Security
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/OS_sec_experiment.h>

@class SecExperiment, NSString;

@interface SecExpConcrete_sec_experiment : NSObject <OS_sec_experiment> {

	SecExperiment* innerExperiment;
	unsigned long long numRuns;
	unsigned long long successRuns;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(const char*)identifier;
-(const char*)name;
-(id)initWithName:(const char*)arg1 ;
-(id)initWithInnerExperiment:(id)arg1 ;
-(BOOL)experimentIsAllowedForProcess;
-(BOOL)isSamplingDisabledWithDefault:(BOOL)arg1 ;
-(BOOL)isSamplingDisabled;
-(id)copyExperimentConfiguration;
@end

