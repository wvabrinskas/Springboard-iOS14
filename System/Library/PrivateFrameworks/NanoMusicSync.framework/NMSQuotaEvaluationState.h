/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber;

@interface NMSQuotaEvaluationState : NSObject {

	NSNumber* _identifer;
	unsigned long long _itemSize;
	unsigned long long _listTotalSize;
	unsigned long long _listQuota;
	long long _containerIndex;
	long long _itemIndex;

}

@property (nonatomic,retain) NSNumber * identifer;                          //@synthesize identifer=_identifer - In the implementation block
@property (assign,nonatomic) unsigned long long itemSize;                   //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) unsigned long long listTotalSize;              //@synthesize listTotalSize=_listTotalSize - In the implementation block
@property (assign,nonatomic) unsigned long long listQuota;                  //@synthesize listQuota=_listQuota - In the implementation block
@property (assign,nonatomic) long long containerIndex;                      //@synthesize containerIndex=_containerIndex - In the implementation block
@property (assign,nonatomic) long long itemIndex;                           //@synthesize itemIndex=_itemIndex - In the implementation block
-(void)setItemIndex:(long long)arg1 ;
-(void)setItemSize:(unsigned long long)arg1 ;
-(NSNumber *)identifer;
-(unsigned long long)itemSize;
-(void)setIdentifer:(NSNumber *)arg1 ;
-(long long)itemIndex;
-(long long)containerIndex;
-(void)setContainerIndex:(long long)arg1 ;
-(unsigned long long)listTotalSize;
-(void)setListTotalSize:(unsigned long long)arg1 ;
-(unsigned long long)listQuota;
-(void)setListQuota:(unsigned long long)arg1 ;
@end

