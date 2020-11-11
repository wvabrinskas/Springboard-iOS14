/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSLock, NSMutableDictionary;

@interface IMBusinessNameManager : NSObject {

	NSLock* _cacheLock;
	NSMutableDictionary* _cache;
	NSMutableDictionary* _pendingRequests;

}

@property (retain) NSLock * cacheLock;                                 //@synthesize cacheLock=_cacheLock - In the implementation block
@property (retain) NSMutableDictionary * cache;                        //@synthesize cache=_cache - In the implementation block
@property (retain) NSMutableDictionary * pendingRequests;              //@synthesize pendingRequests=_pendingRequests - In the implementation block
+(id)sharedInstance;
-(void)setPendingRequests:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)pendingRequests;
-(NSMutableDictionary *)cache;
-(id)init;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(id)businessNameForUID:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(void)setCacheLock:(NSLock *)arg1 ;
-(NSLock *)cacheLock;
@end
