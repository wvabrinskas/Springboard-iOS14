/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RelativeMotion.framework/RelativeMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData;

@interface RMConnectionClientCachedMessage : NSObject {

	NSString* _name;
	NSData* _data;
	/*^block*/id _streamingCallback;

}

@property (nonatomic,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSData * data;                     //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) id streamingCallback;              //@synthesize streamingCallback=_streamingCallback - In the implementation block
-(NSString *)name;
-(NSData *)data;
-(id)initWithName:(id)arg1 data:(id)arg2 streamingCallback:(/*^block*/id)arg3 ;
-(id)streamingCallback;
-(id)initWithName:(id)arg1 data:(id)arg2 ;
@end

