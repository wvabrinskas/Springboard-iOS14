/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXGadgetDataSourceManager.h>
#import <libobjc.A.dylib/PXCMMCloudGadgetViewControllerDelegate.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@class NSArray, PXForYouGadgetPriorityManager, PXCMMInvitationsHorizontalGadgetProvider, PXCMMSuggestionsHorizontalGadgetProvider, PXCloudWelcomeGadgetProvider, PXSharedAlbumActivityHorizontalGadgetProvider, PXHorizontalCollectionGadgetProvider, PXForYouEditSuggestionsGadgetProvider, PXForYouRecentInterestSuggestionsGadgetProvider, PXForYouMemoryGadgetProvider, PXPeopleQuestionsGadgetProvider, PXForYouFooterGadgetProvider, PXSampleSuggestionProvider, PXGadgetNavigationHelper, NSString;

@interface PXForYouGadgetDataSourceManager : PXGadgetDataSourceManager <PXCMMCloudGadgetViewControllerDelegate, PXSettingsKeyObserver> {

	NSArray* _gadgetProviders;
	BOOL _isLaunchedToTest;
	PXForYouGadgetPriorityManager* _priorityManager;
	PXCMMInvitationsHorizontalGadgetProvider* _CMMInvitationsHorizontalGadgetProvider;
	PXCMMSuggestionsHorizontalGadgetProvider* _CMMSuggestionsHorizontalGadgetProvider;
	PXCloudWelcomeGadgetProvider* _CMMCloudWelcomeGadgetProvider;
	PXSharedAlbumActivityHorizontalGadgetProvider* _icpsActivityHorizontalGadgetProvider;
	PXHorizontalCollectionGadgetProvider* _inboxHorizontalGadgetProvider;
	PXHorizontalCollectionGadgetProvider* _editSuggestionsHorizontalGadgetProvider;
	PXForYouEditSuggestionsGadgetProvider* _editSuggestionsGadgetProvider;
	PXHorizontalCollectionGadgetProvider* _recentInterestSuggestionsHorizontalGadgetProvider;
	PXForYouRecentInterestSuggestionsGadgetProvider* _recentInterestsSuggestionsGadgetProvider;
	PXForYouMemoryGadgetProvider* _memoryGadgetProvider;
	PXPeopleQuestionsGadgetProvider* _peopleQuestionsGadgetProvider;
	PXHorizontalCollectionGadgetProvider* _peopleQuestionsHorizontalGadgetProvider;
	PXForYouFooterGadgetProvider* _footerGadgetProvider;
	PXSampleSuggestionProvider* _sampleSuggestionGadgetsProvider;

}

@property (nonatomic,retain) PXCMMInvitationsHorizontalGadgetProvider * CMMInvitationsHorizontalGadgetProvider;                       //@synthesize CMMInvitationsHorizontalGadgetProvider=_CMMInvitationsHorizontalGadgetProvider - In the implementation block
@property (nonatomic,retain) PXCMMSuggestionsHorizontalGadgetProvider * CMMSuggestionsHorizontalGadgetProvider;                       //@synthesize CMMSuggestionsHorizontalGadgetProvider=_CMMSuggestionsHorizontalGadgetProvider - In the implementation block
@property (nonatomic,retain) PXCloudWelcomeGadgetProvider * CMMCloudWelcomeGadgetProvider;                                            //@synthesize CMMCloudWelcomeGadgetProvider=_CMMCloudWelcomeGadgetProvider - In the implementation block
@property (nonatomic,retain) PXSharedAlbumActivityHorizontalGadgetProvider * icpsActivityHorizontalGadgetProvider;                    //@synthesize icpsActivityHorizontalGadgetProvider=_icpsActivityHorizontalGadgetProvider - In the implementation block
@property (nonatomic,retain) PXHorizontalCollectionGadgetProvider * inboxHorizontalGadgetProvider;                                    //@synthesize inboxHorizontalGadgetProvider=_inboxHorizontalGadgetProvider - In the implementation block
@property (nonatomic,retain) PXHorizontalCollectionGadgetProvider * editSuggestionsHorizontalGadgetProvider;                          //@synthesize editSuggestionsHorizontalGadgetProvider=_editSuggestionsHorizontalGadgetProvider - In the implementation block
@property (nonatomic,retain) PXForYouEditSuggestionsGadgetProvider * editSuggestionsGadgetProvider;                                   //@synthesize editSuggestionsGadgetProvider=_editSuggestionsGadgetProvider - In the implementation block
@property (nonatomic,retain) PXHorizontalCollectionGadgetProvider * recentInterestSuggestionsHorizontalGadgetProvider;                //@synthesize recentInterestSuggestionsHorizontalGadgetProvider=_recentInterestSuggestionsHorizontalGadgetProvider - In the implementation block
@property (nonatomic,retain) PXForYouRecentInterestSuggestionsGadgetProvider * recentInterestsSuggestionsGadgetProvider;              //@synthesize recentInterestsSuggestionsGadgetProvider=_recentInterestsSuggestionsGadgetProvider - In the implementation block
@property (nonatomic,retain) PXForYouMemoryGadgetProvider * memoryGadgetProvider;                                                     //@synthesize memoryGadgetProvider=_memoryGadgetProvider - In the implementation block
@property (nonatomic,retain) PXPeopleQuestionsGadgetProvider * peopleQuestionsGadgetProvider;                                         //@synthesize peopleQuestionsGadgetProvider=_peopleQuestionsGadgetProvider - In the implementation block
@property (nonatomic,retain) PXHorizontalCollectionGadgetProvider * peopleQuestionsHorizontalGadgetProvider;                          //@synthesize peopleQuestionsHorizontalGadgetProvider=_peopleQuestionsHorizontalGadgetProvider - In the implementation block
@property (nonatomic,retain) PXForYouFooterGadgetProvider * footerGadgetProvider;                                                     //@synthesize footerGadgetProvider=_footerGadgetProvider - In the implementation block
@property (nonatomic,retain) PXSampleSuggestionProvider * sampleSuggestionGadgetsProvider;                                            //@synthesize sampleSuggestionGadgetsProvider=_sampleSuggestionGadgetsProvider - In the implementation block
@property (nonatomic,readonly) PXForYouGadgetPriorityManager * priorityManager;                                                       //@synthesize priorityManager=_priorityManager - In the implementation block
@property (nonatomic,readonly) BOOL isLaunchedToTest;                                                                                 //@synthesize isLaunchedToTest=_isLaunchedToTest - In the implementation block
@property (nonatomic,readonly) id<PXGadgetTransition> gadgetTransition; 
@property (nonatomic,readonly) PXGadgetNavigationHelper * rootNavigationHelper; 
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> nextGadgetResponder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)_adjustComparasionForInbox:(long long)arg1 gadgetType1:(unsigned long long)arg2 gadgeType2:(unsigned long long)arg3 ;
-(void)setFooterGadgetProvider:(PXForYouFooterGadgetProvider *)arg1 ;
-(void)didLoadDataForPriorities;
-(void)removeCachedProviders;
-(void)setPeopleQuestionsHorizontalGadgetProvider:(PXHorizontalCollectionGadgetProvider *)arg1 ;
-(void)setMemoryGadgetProvider:(PXForYouMemoryGadgetProvider *)arg1 ;
-(void)setCMMCloudWelcomeGadgetProvider:(PXCloudWelcomeGadgetProvider *)arg1 ;
-(PXHorizontalCollectionGadgetProvider *)recentInterestSuggestionsHorizontalGadgetProvider;
-(void)setPeopleQuestionsGadgetProvider:(PXPeopleQuestionsGadgetProvider *)arg1 ;
-(void)setRecentInterestSuggestionsHorizontalGadgetProvider:(PXHorizontalCollectionGadgetProvider *)arg1 ;
-(void)_updatePrioritiesForCalendarChange;
-(void)presentationRequestForWelcomeCloudViewController:(id)arg1 ;
-(void)_calendarDayChanged;
-(void)_forceCalendarDayChanged;
-(BOOL)_resetSortingRanksIfNecessary;
-(BOOL)_gadgetProviderIsInbox:(id)arg1 ;
-(id)gadgetProviders;
-(PXHorizontalCollectionGadgetProvider *)inboxHorizontalGadgetProvider;
-(id)initWithPriorityManager:(id)arg1 isLaunchedToTest:(BOOL)arg2 ;
-(void)_calendarDayChangedForced:(BOOL)arg1 ;
-(PXForYouGadgetPriorityManager *)priorityManager;
-(BOOL)isLaunchedToTest;
-(void)setEditSuggestionsHorizontalGadgetProvider:(PXHorizontalCollectionGadgetProvider *)arg1 ;
-(/*^block*/id)gadgetSortComparator;
-(void)setIcpsActivityHorizontalGadgetProvider:(PXSharedAlbumActivityHorizontalGadgetProvider *)arg1 ;
-(PXHorizontalCollectionGadgetProvider *)editSuggestionsHorizontalGadgetProvider;
-(PXForYouFooterGadgetProvider *)footerGadgetProvider;
-(void)setCMMInvitationsHorizontalGadgetProvider:(PXCMMInvitationsHorizontalGadgetProvider *)arg1 ;
-(void)didUpdateCloudPhotoLibraryEnablement:(id)arg1 ;
-(/*^block*/id)gadgetProviderSortComparator;
-(PXForYouMemoryGadgetProvider *)memoryGadgetProvider;
-(unsigned long long)_adjustGadgetTypeForRanking:(unsigned long long)arg1 ;
-(PXCloudWelcomeGadgetProvider *)CMMCloudWelcomeGadgetProvider;
-(void)setSampleSuggestionGadgetsProvider:(PXSampleSuggestionProvider *)arg1 ;
-(PXCMMInvitationsHorizontalGadgetProvider *)CMMInvitationsHorizontalGadgetProvider;
-(PXCMMSuggestionsHorizontalGadgetProvider *)CMMSuggestionsHorizontalGadgetProvider;
-(long long)_compareRank1:(long long)arg1 rank2:(long long)arg2 ;
-(PXSharedAlbumActivityHorizontalGadgetProvider *)icpsActivityHorizontalGadgetProvider;
-(id)hiddenGadgetProviders;
-(void)setInboxHorizontalGadgetProvider:(PXHorizontalCollectionGadgetProvider *)arg1 ;
-(PXPeopleQuestionsGadgetProvider *)peopleQuestionsGadgetProvider;
-(BOOL)_canShowSurveyQuestionsGadget;
-(PXForYouEditSuggestionsGadgetProvider *)editSuggestionsGadgetProvider;
-(void)setRecentInterestsSuggestionsGadgetProvider:(PXForYouRecentInterestSuggestionsGadgetProvider *)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(PXHorizontalCollectionGadgetProvider *)peopleQuestionsHorizontalGadgetProvider;
-(void)setEditSuggestionsGadgetProvider:(PXForYouEditSuggestionsGadgetProvider *)arg1 ;
-(PXForYouRecentInterestSuggestionsGadgetProvider *)recentInterestsSuggestionsGadgetProvider;
-(void)setCMMSuggestionsHorizontalGadgetProvider:(PXCMMSuggestionsHorizontalGadgetProvider *)arg1 ;
-(PXSampleSuggestionProvider *)sampleSuggestionGadgetsProvider;
@end

