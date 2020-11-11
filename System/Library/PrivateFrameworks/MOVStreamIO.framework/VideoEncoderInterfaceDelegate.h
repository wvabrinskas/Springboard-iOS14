/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VideoEncoderInterfaceDelegate <NSObject>
@required
-(void)encoder:(id)arg1 encodedSampleBuffer:(opaqueCMSampleBufferRef)arg2 metadata:(id)arg3 presentationTime:(SCD_Struct_MO5)arg4 streamId:(id)arg5;
-(void)encoder:(id)arg1 encodingFailedForStream:(id)arg2;
-(id)encoder:(id)arg1 overrideVideoEncoderSpecificationForstreamId:(id)arg2;
-(BOOL)encoder:(id)arg1 configureSessionOverride:(OpaqueVTCompressionSessionRef)arg2 streamId:(id)arg3;
-(unsigned)encoder:(id)arg1 codecTypeOverrideForstreamId:(id)arg2;

@end
