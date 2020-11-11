/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@protocol HUSwitchCellDelegate;
@class HFItem, NSString;

@interface HUSwitchCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol> {

	BOOL _disabled;
	HFItem* _item;
	id<HUSwitchCellDelegate> _delegate;

}

@property (assign,getter=isOn,nonatomic) BOOL on; 
@property (assign,nonatomic,__weak) id<HUSwitchCellDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                  //@synthesize disabled=_disabled - In the implementation block
-(void)setDisabled:(BOOL)arg1 ;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isDisabled;
-(BOOL)isOn;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(HFItem *)item;
-(id<HUSwitchCellDelegate>)delegate;
-(void)setOn:(BOOL)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)_switch;
-(void)setItem:(HFItem *)arg1 ;
-(void)setDelegate:(id<HUSwitchCellDelegate>)arg1 ;
-(NSString *)description;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)_toggleOn:(id)arg1 ;
@end
