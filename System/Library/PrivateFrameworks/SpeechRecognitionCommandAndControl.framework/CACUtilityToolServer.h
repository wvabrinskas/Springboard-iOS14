/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface CACUtilityToolServer : NSObject {

	NSObject*<OS_dispatch_queue> _toolServerDispatchQueue;
	NSObject*<OS_xpc_object> _feedbackListener;

}
+(id)sharedInstance;
-(id)init;
@end
