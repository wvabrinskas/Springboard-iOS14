/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_transaction;
@class NSUUID, NSObject, NSString;

@interface MSVXPCTransaction : NSObject {

	NSUUID* _identifier;
	NSObject*<OS_os_transaction> _transaction;
	long long _transactionCount;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
+(id)activeTransactions;
-(void)endTransaction;
-(void)beginTransaction;
-(void)endTransactionOnDate:(id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(BOOL)isActive;
@end

