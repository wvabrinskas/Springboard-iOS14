/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/STSSearchBarDelegate.h>
#import <libobjc.A.dylib/PKScribbleInteractionDelegate.h>
#import <libobjc.A.dylib/PKScribbleInteractionElementSource.h>

@protocol STSZKWBrowserHeaderViewDelegate, STSKeyCommandDelegate;
@class UIVisualEffectView, STSSearchBar, UIButton, NSMutableArray, NSArray, NSString;

@interface STSZKWBrowserHeaderView : UIView <UISearchBarDelegate, UITextFieldDelegate, STSSearchBarDelegate, PKScribbleInteractionDelegate, PKScribbleInteractionElementSource> {

	UIVisualEffectView* _visualEffectView;
	STSSearchBar* _searchBar;
	UIButton* _feedbackButton;
	NSMutableArray* _topZKWButtons;
	NSMutableArray* _bottomZKWButtons;
	BOOL _writingInSearchBar;
	NSMutableArray* _searchBarConstraints;
	id<STSZKWBrowserHeaderViewDelegate> _delegate;
	id<STSKeyCommandDelegate> _keyCommandDelegate;
	NSArray* _topSuggestions;
	NSArray* _bottomSuggestions;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic,__weak) id<STSZKWBrowserHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<STSKeyCommandDelegate> keyCommandDelegate;              //@synthesize keyCommandDelegate=_keyCommandDelegate - In the implementation block
@property (nonatomic,copy) NSArray * topSuggestions;                                           //@synthesize topSuggestions=_topSuggestions - In the implementation block
@property (nonatomic,copy) NSArray * bottomSuggestions;                                        //@synthesize bottomSuggestions=_bottomSuggestions - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                        //@synthesize contentInset=_contentInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clear;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)returnKeyPressed;
-(CGSize)intrinsicContentSize;
-(void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(CGPoint)arg3 completion:(/*^block*/id)arg4 ;
-(UIEdgeInsets)contentInset;
-(void)_cancelButtonPressed:(id)arg1 ;
-(id)init;
-(id<STSZKWBrowserHeaderViewDelegate>)delegate;
-(id)searchQuery;
-(void)setSearchQuery:(id)arg1 ;
-(void)escapeKeyPressed;
-(id)keyCommands;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setDelegate:(id<STSZKWBrowserHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(BOOL)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2 ;
-(void)_scribbleInteraction:(id)arg1 requestElementsInRect:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_scribbleInteraction:(id)arg1 shouldBeginAtLocation:(CGPoint)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_scribbleInteraction:(id)arg1 didFinishWritingInElement:(id)arg2 ;
-(void)upArrowPressed;
-(void)downArrowPressed;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)_scribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2 ;
-(CGRect)contentRect;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(id)_buttonWithTitle:(id)arg1 ;
-(CGRect)_scribbleInteraction:(id)arg1 frameForElement:(id)arg2 ;
-(void)setTopSuggestions:(NSArray *)arg1 ;
-(void)setBottomSuggestions:(NSArray *)arg1 ;
-(void)_searchButtonPressed:(id)arg1 ;
-(void)_updateTopStackView:(BOOL)arg1 andBottomStackView:(BOOL)arg2 ;
-(double)_searchBarWidthFraction;
-(unsigned long long)_suggestionIndexForButton:(id)arg1 ;
-(void)_suggestionButtonPressed:(id)arg1 ;
-(void)searchBarClicked;
-(void)enableSearchButton;
-(id<STSKeyCommandDelegate>)keyCommandDelegate;
-(void)setKeyCommandDelegate:(id<STSKeyCommandDelegate>)arg1 ;
-(NSArray *)topSuggestions;
-(NSArray *)bottomSuggestions;
@end

