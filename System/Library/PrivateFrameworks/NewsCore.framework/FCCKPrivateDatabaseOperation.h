/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCOperation.h>

@class FCCKPrivateDatabase;

@interface FCCKPrivateDatabaseOperation : FCOperation {

	BOOL _skipPreflight;
	BOOL _handleIdentityLoss;
	FCCKPrivateDatabase* _database;

}

@property (nonatomic,retain) FCCKPrivateDatabase * database;              //@synthesize database=_database - In the implementation block
@property (assign,nonatomic) BOOL skipPreflight;                          //@synthesize skipPreflight=_skipPreflight - In the implementation block
@property (assign,nonatomic) BOOL handleIdentityLoss;                     //@synthesize handleIdentityLoss=_handleIdentityLoss - In the implementation block
-(void)setDatabase:(FCCKPrivateDatabase *)arg1 ;
-(BOOL)validateOperation;
-(id)init;
-(BOOL)canRetryWithError:(id)arg1 retryAfter:(id*)arg2 ;
-(unsigned long long)maxRetries;
-(BOOL)skipPreflight;
-(BOOL)handleIdentityLoss;
-(void)runChildCKOperation:(id)arg1 destination:(long long)arg2 ;
-(void)setSkipPreflight:(BOOL)arg1 ;
-(void)setHandleIdentityLoss:(BOOL)arg1 ;
-(FCCKPrivateDatabase *)database;
@end
