/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARImageBasedTechnique.h>

@protocol OS_dispatch_queue;
@class ARImageScalingTechnique, NSObject;

@interface ARMLImageMattingMetadataTechnique : ARImageBasedTechnique {

	BOOL _enableDoubleMLResolutionForIPad;
	ARImageScalingTechnique* _mattingImageScalingTechnique;
	CVPixelBufferPoolRef _bgraMattingPixelBufferPool;
	vImageCVImageFormatRef _cvImageFormatRef;
	NSObject*<OS_dispatch_queue> _processingQueue;
	BOOL _deterministic;

}
-(id)init;
-(id)processData:(id)arg1 ;
-(void)prepare:(BOOL)arg1 ;
-(void)dealloc;
-(id)_generateMattingMetadata:(id)arg1 ;
-(id)_convertImageColorSpace:(id)arg1 pPoolToUse:(_CVPixelBufferPool*)arg2 ;
-(double)requiredTimeInterval;
-(id)resultDataClasses;
@end
