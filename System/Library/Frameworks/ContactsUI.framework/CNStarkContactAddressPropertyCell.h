/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/CNPropertyPostalAddressCell.h>
#import <libobjc.A.dylib/CNStarkActionViewDelegate.h>

@class CNStarkActionView, NSLayoutConstraint, NSString;

@interface CNStarkContactAddressPropertyCell : CNPropertyPostalAddressCell <CNStarkActionViewDelegate> {

	CNStarkActionView* _actionView;
	NSLayoutConstraint* _labelViewFirstBaselineAnchorConstraint;
	NSLayoutConstraint* _valueViewFirstBaselineAnchorConstraint;
	NSLayoutConstraint* _contentViewBottomAnchorConstraint;

}

@property (nonatomic,readonly) CNStarkActionView * actionView;                                         //@synthesize actionView=_actionView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelViewFirstBaselineAnchorConstraint;              //@synthesize labelViewFirstBaselineAnchorConstraint=_labelViewFirstBaselineAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * valueViewFirstBaselineAnchorConstraint;              //@synthesize valueViewFirstBaselineAnchorConstraint=_valueViewFirstBaselineAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomAnchorConstraint;                   //@synthesize contentViewBottomAnchorConstraint=_contentViewBottomAnchorConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setSeparatorStyle:(long long)arg1 ;
-(BOOL)shouldShowStar;
-(void)actionViewTapped:(id)arg1 ;
-(BOOL)supportsTintColorValue;
-(void)updateTransportButtons;
-(id)constantConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSLayoutConstraint *)labelViewFirstBaselineAnchorConstraint;
-(void)setLabelViewFirstBaselineAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)valueViewFirstBaselineAnchorConstraint;
-(void)setValueViewFirstBaselineAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)performDefaultAction;
-(CNStarkActionView *)actionView;
-(BOOL)supportsValueColorUsesLabelColor;
-(id)variableConstraints;
-(NSLayoutConstraint *)contentViewBottomAnchorConstraint;
-(void)setContentViewBottomAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_cnui_applyContactStyle;
@end
