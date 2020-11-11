/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UITableView, UIButton;

@interface VUIPopoverViewControllerView : UIView {

	UITableView* _tableView;
	UIButton* _cancelButton;

}

@property (nonatomic,retain) UITableView * tableView;                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton;              //@synthesize cancelButton=_cancelButton - In the implementation block
-(UIButton *)cancelButton;
-(void)setTableView:(UITableView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UITableView *)tableView;
-(void)layoutSubviews;
-(void)_configureSubviews;
-(id)initWithCoder:(id)arg1 ;
@end
