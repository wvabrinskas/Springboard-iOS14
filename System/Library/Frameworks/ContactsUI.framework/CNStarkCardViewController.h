/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNContactContentViewControllerDelegate.h>

@class CNAvatarViewController, CNStarkContactInfoViewController, CNStarkActionsController, CNContact, NSArray, UILayoutGuide, NSString;

@interface CNStarkCardViewController : UIViewController <CNContactContentViewControllerDelegate> {

	CNAvatarViewController* _avatarViewController;
	CNStarkContactInfoViewController* _contactInfoViewController;
	CNStarkActionsController* _actionsController;
	CNContact* _contact;
	NSArray* _displayedContactProperties;
	NSArray* _layoutConstraints;
	UILayoutGuide* _centeringLayoutGuide;
	UILayoutGuide* _avatarAndDetailsLayoutGuide;

}

@property (nonatomic,readonly) CNAvatarViewController * avatarViewController;                             //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (nonatomic,readonly) CNStarkContactInfoViewController * contactInfoViewController;              //@synthesize contactInfoViewController=_contactInfoViewController - In the implementation block
@property (nonatomic,readonly) CNStarkActionsController * actionsController;                              //@synthesize actionsController=_actionsController - In the implementation block
@property (nonatomic,readonly) CNContact * contact;                                                       //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSArray * displayedContactProperties;                                      //@synthesize displayedContactProperties=_displayedContactProperties - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;                                                 //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (nonatomic,retain) UILayoutGuide * centeringLayoutGuide;                                        //@synthesize centeringLayoutGuide=_centeringLayoutGuide - In the implementation block
@property (nonatomic,retain) UILayoutGuide * avatarAndDetailsLayoutGuide;                                 //@synthesize avatarAndDetailsLayoutGuide=_avatarAndDetailsLayoutGuide - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
+(id)starkCardControllerForCalendarEventWithContact:(id)arg1 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4 ;
-(CNContact *)contact;
-(id)init;
-(void)updateViewConstraints;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)showMore:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CNAvatarViewController *)avatarViewController;
-(void)setupViewControllers;
-(id)initWithContact:(id)arg1 displayedContactProperties:(id)arg2 ;
-(void)setupLayoutGuides;
-(CNStarkActionsController *)actionsController;
-(void)resetLayoutConstraints;
-(void)setupLayoutConstraints;
-(void)updateViewControllers;
-(void)updateNavigationItems;
-(CNStarkContactInfoViewController *)contactInfoViewController;
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
-(UILayoutGuide *)centeringLayoutGuide;
-(void)setCenteringLayoutGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)avatarAndDetailsLayoutGuide;
-(void)setAvatarAndDetailsLayoutGuide:(UILayoutGuide *)arg1 ;
-(NSArray *)displayedContactProperties;
@end
