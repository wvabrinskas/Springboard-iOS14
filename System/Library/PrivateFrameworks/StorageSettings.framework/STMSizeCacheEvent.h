/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface STMSizeCacheEvent : NSObject {

	unsigned _flags;
	NSString* _path;
	unsigned long long _evtID;

}

@property (retain) NSString * path;                       //@synthesize path=_path - In the implementation block
@property (assign) unsigned long long evtID;              //@synthesize evtID=_evtID - In the implementation block
@property (assign) unsigned flags;                        //@synthesize flags=_flags - In the implementation block
+(id)eventWithPath:(id)arg1 flags:(unsigned)arg2 event:(unsigned long long)arg3 ;
-(void)setPath:(NSString *)arg1 ;
-(unsigned)flags;
-(unsigned long long)evtID;
-(void)setFlags:(unsigned)arg1 ;
-(NSString *)path;
-(void)setEvtID:(unsigned long long)arg1 ;
@end

