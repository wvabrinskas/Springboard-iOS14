/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface HDObjectAuthorizationRecord : NSObject <NSSecureCoding> {

	NSUUID* _objectID;
	NSUUID* _sourceID;
	long long _status;
	double _modificationDate;

}

@property (nonatomic,copy) NSUUID * objectID;                      //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,copy) NSUUID * sourceID;                      //@synthesize sourceID=_sourceID - In the implementation block
@property (assign,nonatomic) long long status;                     //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) double modificationDate;              //@synthesize modificationDate=_modificationDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)objectID;
-(id)init;
-(unsigned long long)hash;
-(long long)status;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setObjectID:(NSUUID *)arg1 ;
-(void)setModificationDate:(double)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(NSUUID *)sourceID;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(double)modificationDate;
-(id)initWithCoder:(id)arg1 ;
-(void)setSourceID:(NSUUID *)arg1 ;
@end
