/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNUIGeminiDataSourceDelegate.h>

@class NSLayoutYAxisAnchor, UILabel, UIStackView, NSArray, CNContact, CNContactGeminiView, CNUIGeminiDataSource, CNGeminiResult, NSString;

@interface CNStarkContactInfoViewController : UIViewController <CNUIGeminiDataSourceDelegate> {

	NSLayoutYAxisAnchor* _firstBaselineAnchor;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UIStackView* _stackView;
	NSArray* _layoutConstraints;
	CNContact* _contact;
	CNContactGeminiView* _contactGeminiView;
	CNUIGeminiDataSource* _geminiDataSource;
	CNGeminiResult* _geminiResult;

}

@property (nonatomic,readonly) UILabel * primaryLabel;                                 //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,readonly) UILabel * secondaryLabel;                               //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,readonly) UIStackView * stackView;                                //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;                              //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (nonatomic,readonly) CNContact * contact;                                    //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNContactGeminiView * contactGeminiView;                  //@synthesize contactGeminiView=_contactGeminiView - In the implementation block
@property (nonatomic,retain) CNUIGeminiDataSource * geminiDataSource;                  //@synthesize geminiDataSource=_geminiDataSource - In the implementation block
@property (nonatomic,retain) CNGeminiResult * geminiResult;                            //@synthesize geminiResult=_geminiResult - In the implementation block
@property (nonatomic,readonly) NSLayoutYAxisAnchor * firstBaselineAnchor;              //@synthesize firstBaselineAnchor=_firstBaselineAnchor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
-(UILabel *)primaryLabel;
-(void)setGeminiResult:(CNGeminiResult *)arg1 ;
-(BOOL)shouldShowGemini;
-(CNContact *)contact;
-(id)initWithContact:(id)arg1 ;
-(id)init;
-(void)updateViewConstraints;
-(void)setupViews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CNGeminiResult *)geminiResult;
-(void)updateViews;
-(CNContactGeminiView *)contactGeminiView;
-(void)setContactGeminiView:(CNContactGeminiView *)arg1 ;
-(void)setGeminiDataSource:(CNUIGeminiDataSource *)arg1 ;
-(void)viewDidLoad;
-(void)geminiDataSourceDidUpdate:(id)arg1 ;
-(CNUIGeminiDataSource *)geminiDataSource;
-(id)initWithCoder:(id)arg1 ;
-(NSLayoutYAxisAnchor *)firstBaselineAnchor;
-(UILabel *)secondaryLabel;
-(void)resetLayoutConstraints;
-(void)setupLayoutConstraints;
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
-(UIStackView *)stackView;
@end
