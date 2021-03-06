/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveML/ProactiveML-Structs.h>
#import <libobjc.A.dylib/PMLSampler.h>

@class NSString;

@interface PMLLaplaceSampler : NSObject <PMLSampler> {

	SCD_Struct_PM8 _rng;
	float _magnitude;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)sample;
-(id)initWithMagnitude:(float)arg1 ;
-(id)initWithMagnitude:(float)arg1 seed:(unsigned long long)arg2 ;
@end

