/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@interface NFLFeedCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {

	long long _cellType;
	long long _columnSpan;
	long long _rowSpan;

}

@property (assign,nonatomic) long long cellType;                //@synthesize cellType=_cellType - In the implementation block
@property (assign,nonatomic) long long columnSpan;              //@synthesize columnSpan=_columnSpan - In the implementation block
@property (assign,nonatomic) long long rowSpan;                 //@synthesize rowSpan=_rowSpan - In the implementation block
-(void)setRowSpan:(long long)arg1 ;
-(long long)columnSpan;
-(void)setCellType:(long long)arg1 ;
-(long long)rowSpan;
-(long long)cellType;
-(void)setColumnSpan:(long long)arg1 ;
-(void)populateWithProtobuf:(id)arg1 normalizedWithFeedGutter:(double)arg2 ;
-(id)protobufRepresentationnormalizedWithFeedGutter:(double)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
