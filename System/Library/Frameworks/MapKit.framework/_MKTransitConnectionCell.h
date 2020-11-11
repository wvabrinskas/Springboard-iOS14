/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@protocol GEOTransitConnectionInfo, _MKTransitConnectionCellDelegate;
@class _MKUILabel, MKTransitInfoLabelView, UIButton, NSLayoutConstraint;

@interface _MKTransitConnectionCell : MKCustomSeparatorTableViewCell {

	_MKUILabel* _nameLabel;
	MKTransitInfoLabelView* _transitInfoLabel;
	UIButton* _button;
	NSLayoutConstraint* _nameLabelToTopConstraint;
	NSLayoutConstraint* _transitInfoToNameConstraint;
	id<GEOTransitConnectionInfo> _connectionInfo;
	id<_MKTransitConnectionCellDelegate> _delegate;

}

@property (nonatomic,retain) id<GEOTransitConnectionInfo> connectionInfo;                       //@synthesize connectionInfo=_connectionInfo - In the implementation block
@property (assign,nonatomic,__weak) id<_MKTransitConnectionCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_contentSizeCategoryDidChange;
-(id<_MKTransitConnectionCellDelegate>)delegate;
-(void)_updateConstraintValues;
-(void)setDelegate:(id<_MKTransitConnectionCellDelegate>)arg1 ;
-(id<GEOTransitConnectionInfo>)connectionInfo;
-(void)_buttonSelected;
-(void)setConnectionInfo:(id<GEOTransitConnectionInfo>)arg1 ;
-(void)dealloc;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end
