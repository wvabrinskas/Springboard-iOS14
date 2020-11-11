/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKDPListPosition : PBCodable <NSCopying> {

	int _index;
	BOOL _isReversed;
	SCD_Struct_CK4 _has;

}

@property (assign,nonatomic) BOOL hasIndex; 
@property (assign,nonatomic) int index;                       //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) BOOL hasIsReversed; 
@property (assign,nonatomic) BOOL isReversed;                 //@synthesize isReversed=_isReversed - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setIndex:(int)arg1 ;
-(BOOL)isReversed;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)hasIndex;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(int)index;
-(void)setHasIndex:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIsReversed:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasIsReversed:(BOOL)arg1 ;
-(BOOL)hasIsReversed;
@end
