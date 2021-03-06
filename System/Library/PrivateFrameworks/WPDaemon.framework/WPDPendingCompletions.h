/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSString;

@interface WPDPendingCompletions : NSObject {

	NSMutableArray* _pendingCompletions;
	unsigned long long _lastID;
	NSString* _name;

}

@property (retain) NSMutableArray * pendingCompletions;              //@synthesize pendingCompletions=_pendingCompletions - In the implementation block
@property (assign) unsigned long long lastID;                        //@synthesize lastID=_lastID - In the implementation block
@property (retain) NSString * name;                                  //@synthesize name=_name - In the implementation block
-(unsigned long long)addCompletion:(id)arg1 ;
-(unsigned long long)lastID;
-(void)setLastID:(unsigned long long)arg1 ;
-(NSMutableArray *)pendingCompletions;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(void)completeID:(unsigned long long)arg1 success:(BOOL)arg2 ;
-(void)setPendingCompletions:(NSMutableArray *)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

