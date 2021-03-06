/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BBBulletinUpdate;

@interface BBBulletinUpdateTransaction : NSObject <NSCopying, NSSecureCoding> {

	BBBulletinUpdate* _bulletinUpdate;
	unsigned long long _transactionID;

}

@property (nonatomic,copy,readonly) BBBulletinUpdate * bulletinUpdate;              //@synthesize bulletinUpdate=_bulletinUpdate - In the implementation block
@property (nonatomic,readonly) unsigned long long transactionID;                    //@synthesize transactionID=_transactionID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)transactionWithBulletinUpdate:(id)arg1 transactionID:(unsigned long long)arg2 ;
-(unsigned long long)transactionID;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithBulletinUpdate:(id)arg1 transactionID:(unsigned long long)arg2 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BBBulletinUpdate *)bulletinUpdate;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

