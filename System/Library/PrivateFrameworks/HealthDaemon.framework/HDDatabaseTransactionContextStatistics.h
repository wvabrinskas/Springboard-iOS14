/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSArray, NSString;

@interface HDDatabaseTransactionContextStatistics : NSObject {

	NSMutableArray* _transactions;

}

@property (nonatomic,copy,readonly) NSArray * transactions; 
@property (nonatomic,readonly) double totalDuration; 
@property (nonatomic,copy,readonly) NSString * shortDescription; 
-(double)totalDuration;
-(id)init;
-(NSArray *)transactions;
-(void)_addTransactionStatistics:(id)arg1 ;
-(NSString *)shortDescription;
@end

