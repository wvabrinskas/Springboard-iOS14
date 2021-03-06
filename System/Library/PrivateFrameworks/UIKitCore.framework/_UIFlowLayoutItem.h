/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIFlowLayoutSection, _UIFlowLayoutRow;

@interface _UIFlowLayoutItem : NSObject {

	struct {
		unsigned sizeEstimated : 1;
		unsigned positionEstimated : 1;
		unsigned sizeHasBeenSet : 1;
	}  _itemFlags;
	_UIFlowLayoutSection* _section;
	_UIFlowLayoutRow* _rowObject;
	CGRect _itemFrame;

}

@property (assign,nonatomic,__weak) _UIFlowLayoutSection * section;                          //@synthesize section=_section - In the implementation block
@property (assign,nonatomic,__weak) _UIFlowLayoutRow * rowObject;                            //@synthesize rowObject=_rowObject - In the implementation block
@property (assign,nonatomic) CGRect itemFrame;                                               //@synthesize itemFrame=_itemFrame - In the implementation block
@property (assign,getter=isSizeEstimated,nonatomic) BOOL sizeEstimated; 
@property (assign,nonatomic) BOOL sizeHasBeenSet; 
@property (assign,getter=isPositionEstimated,nonatomic) BOOL positionEstimated; 
-(void)setSection:(_UIFlowLayoutSection *)arg1 ;
-(_UIFlowLayoutSection *)section;
-(void)setItemFrame:(CGRect)arg1 ;
-(BOOL)isSizeEstimated;
-(_UIFlowLayoutRow *)rowObject;
-(void)setSizeEstimated:(BOOL)arg1 ;
-(BOOL)sizeHasBeenSet;
-(BOOL)isPositionEstimated;
-(void)setPositionEstimated:(BOOL)arg1 ;
-(void)setSizeHasBeenSet:(BOOL)arg1 ;
-(void)setRowObject:(_UIFlowLayoutRow *)arg1 ;
-(CGRect)itemFrame;
-(id)copy;
@end

