/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/VNTargetedImageRequest.h>

@class VNImageBuffer, VNImageRegistrationSignature;

@interface VNImageRegistrationRequest : VNTargetedImageRequest {

	VNImageBuffer* _cachedFloatingImageBuffer;
	VNImageRegistrationSignature* _cachedFloatingImageSignature;

}
+(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)wantsSequencedRequestObservationsRecording;
-(BOOL)allowsCachingOfResults;
-(BOOL)internalPerformInContext:(id)arg1 error:(id*)arg2 ;
-(id)cachedFloatingImageBufferReturningError:(id*)arg1 ;
-(id)cachedFloatingImageRegistrationSignatureReturningError:(id*)arg1 ;
-(BOOL)getReferenceImageBuffer:(id*)arg1 registrationSignature:(id*)arg2 forRequestPerformingContext:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
@end

