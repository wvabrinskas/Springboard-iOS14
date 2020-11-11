/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NUJSProxy.h>
#import <libobjc.A.dylib/NUJSImageTransformExport.h>

@class NUImageTransform;

@interface NUJSImageTransform : NUJSProxy <NUJSImageTransformExport>

@property (readonly) NUImageTransform * transform; 
-(NUImageTransform *)transform;
-(id)description;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(id)transformByScaleX:(double)arg1 scaleY:(double)arg2 ;
-(id)transformByTranslateX:(double)arg1 translateY:(double)arg2 ;
-(id)transformByRotateZ:(double)arg1 ;
-(id)transformByRotateX:(double)arg1 y:(double)arg2 z:(double)arg3 ;
-(id)initWithImageTransform:(id)arg1 context:(id)arg2 ;
@end
