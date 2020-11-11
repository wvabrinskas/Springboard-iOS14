/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FTSpeechTranslationResponseDelegate.h>

@class FTBlazarService, NSString;

@interface _LTLoggingRequestHandler : NSObject <FTSpeechTranslationResponseDelegate> {

	FTBlazarService* _mtAppService;

}

@property (nonatomic,readonly) FTBlazarService * mtAppService;              //@synthesize mtAppService=_mtAppService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startLoggingRequest:(id)arg1 ;
-(void)streamDidReceiveSpeechTranslationStreamingResponse:(id)arg1 ;
-(void)streamFailVerifySpeechTranslationStreamingResponse:(id)arg1 ;
-(void)startSpeechLIDRequest:(id)arg1 ;
-(void)startSpeechSensesLoggingRequest:(id)arg1 ;
-(void)startSafariLatencyLoggingRequest:(id)arg1 ;
-(void)startSafariFeedbackRequest:(id)arg1 ;
-(FTBlazarService *)mtAppService;
@end
