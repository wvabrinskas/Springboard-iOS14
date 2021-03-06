/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSIndexPath, NSString;

@interface UITableViewPlaceholder : NSObject {

	/*^block*/id _cellUpdateHandler;
	NSIndexPath* _insertionIndexPath;
	NSString* _reuseIdentifier;
	double _rowHeight;

}

@property (nonatomic,retain) NSIndexPath * insertionIndexPath;              //@synthesize insertionIndexPath=_insertionIndexPath - In the implementation block
@property (nonatomic,retain) NSString * reuseIdentifier;                    //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (assign,nonatomic) double rowHeight;                              //@synthesize rowHeight=_rowHeight - In the implementation block
@property (nonatomic,copy) id cellUpdateHandler;                            //@synthesize cellUpdateHandler=_cellUpdateHandler - In the implementation block
-(void)setRowHeight:(double)arg1 ;
-(id)cellUpdateHandler;
-(double)rowHeight;
-(void)setCellUpdateHandler:(id)arg1 ;
-(void)setInsertionIndexPath:(NSIndexPath *)arg1 ;
-(NSString *)reuseIdentifier;
-(id)initWithInsertionIndexPath:(id)arg1 reuseIdentifier:(id)arg2 rowHeight:(double)arg3 ;
-(NSIndexPath *)insertionIndexPath;
-(void)setReuseIdentifier:(NSString *)arg1 ;
@end

