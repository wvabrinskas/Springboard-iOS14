/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libAppletTranslationLibrary.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface ATLTimer : NSObject {

	NSObject*<OS_dispatch_source> _src;
	/*^block*/id _block;
	double _delay;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
@end

