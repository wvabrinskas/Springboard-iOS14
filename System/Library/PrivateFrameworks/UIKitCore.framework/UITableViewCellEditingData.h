/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UITableViewCell, UITableViewCellEditControl, UITableViewCellReorderControl, UIView;

@interface UITableViewCellEditingData : NSObject {

	UITableViewCell* _cell;
	long long _editingStyle;
	UITableViewCellEditControl* _editControl;
	UITableViewCellReorderControl* _reorderControl;
	UIView* _reorderSeparatorView;

}

@property (getter=isDataRequired,nonatomic,readonly) BOOL dataRequired; 
@property (nonatomic,readonly) BOOL wantsMaskingWhileAnimatingDisabled; 
-(id)reorderControl:(BOOL)arg1 ;
-(BOOL)wantsMaskingWhileAnimatingDisabled;
-(BOOL)isDataRequired;
-(id)reorderSeparatorView:(BOOL)arg1 ;
-(id)editControl:(BOOL)arg1 ;
-(id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2 ;
-(void)dealloc;
@end
