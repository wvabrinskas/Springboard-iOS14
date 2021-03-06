/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BLTPBFullBulletinList;

@interface BLTPBUpdateBulletinListRequest : PBRequest <NSCopying> {

	BLTPBFullBulletinList* _bulletinList;

}

@property (nonatomic,readonly) BOOL hasBulletinList; 
@property (nonatomic,retain) BLTPBFullBulletinList * bulletinList;              //@synthesize bulletinList=_bulletinList - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBulletinList:(BLTPBFullBulletinList *)arg1 ;
-(BOOL)hasBulletinList;
-(BLTPBFullBulletinList *)bulletinList;
@end

