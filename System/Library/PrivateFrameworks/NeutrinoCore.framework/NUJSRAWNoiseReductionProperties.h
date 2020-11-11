/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NUJSProxy.h>
#import <libobjc.A.dylib/NUJSRAWNoiseReductionImagePropertiesExport.h>

@interface NUJSRAWNoiseReductionProperties : NUJSProxy <NUJSRAWNoiseReductionImagePropertiesExport>

@property (readonly) id<NURAWNoiseReductionProperties> rawNoiseReductionProperties; 
@property (readonly) double luminance; 
@property (readonly) double color; 
-(double)luminance;
-(double)color;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(id)initWithRAWNoiseReductionProperties:(id)arg1 context:(id)arg2 ;
-(id<NURAWNoiseReductionProperties>)rawNoiseReductionProperties;
@end
