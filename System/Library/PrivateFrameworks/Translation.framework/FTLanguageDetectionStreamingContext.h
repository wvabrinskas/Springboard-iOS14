/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OspreyClientStreamingContext;
@interface FTLanguageDetectionStreamingContext : NSObject {

	id<OspreyClientStreamingContext> _grpcContext;

}
-(id)initWithGRPCStreamingCallContext:(id)arg1 ;
-(void)sendLanguageDetectionStreamingRequest:(id)arg1 ;
-(void)closeStream;
@end
