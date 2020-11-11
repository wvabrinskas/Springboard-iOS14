/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ControlCenterServices/ControlCenterServices-Structs.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol BSDefaultObserver, OS_dispatch_queue;
@class NSArray, NSSet, NSDictionary, NSHashTable, NSObject, NSString;

@interface CCSModuleRepository : NSObject <LSApplicationWorkspaceObserverProtocol> {

	NSArray* _directoryURLs;
	NSSet* _allowedModuleIdentifiers;
	NSDictionary* _allModuleMetadataByIdentifier;
	NSSet* _availableModuleIdentifiers;
	NSSet* _interestingBundleIdentifiers;
	MGNotificationTokenStructRef _mobileGestaltNotificationToken;
	NSHashTable* _observers;
	NSObject*<BSDefaultObserver> _internalDefaultsObserver;
	NSSet* _loadableModuleIdentifiers;
	BOOL _ignoreAllowedList;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;

}

@property (nonatomic,copy,readonly) NSSet * loadableModuleIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultModuleIdentifierAllowedList;
+(id)_deviceFamily;
+(id)repositoryWithDefaults;
+(id)_defaultModuleDirectories;
-(void)_updateAvailableModuleMetadata;
-(void)applicationStateDidChange:(id)arg1 ;
-(void)_applicationsDidChange:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)_queue_updateLoadableModuleMetadata;
-(void)_queue_updateAllModuleMetadataForAllModuleMetadata:(id)arg1 ;
-(void)_queue_setIgnoreAllowedList:(BOOL)arg1 ;
-(BOOL)_queue_arrayContainsInterestingApplicationProxy:(id)arg1 ;
-(id)_queue_loadAllModuleMetadata;
-(void)setVisibility:(BOOL)arg1 forModuleIdentifier:(id)arg2 ;
-(void)_queue_unregisterForVisiblityPreferenceChanges;
-(void)_queue_runBlockOnObservers:(/*^block*/id)arg1 ;
-(BOOL)visibilityForModuleIdentifier:(id)arg1 ;
-(id)_queue_gestaltQuestionsForModuleMetadata:(id)arg1 ;
-(void)_queue_unregisterForInternalPreferenceChanges;
-(void)_queue_startObservingMobileGestaltQuestions:(id)arg1 withChangeHandler:(/*^block*/id)arg2 ;
-(void)_queue_registerForInternalPreferenceChanges;
-(void)addObserver:(id)arg1 ;
-(id)_queue_associatedBundleIdentifiersForModuleMetadata:(id)arg1 ;
-(void)_queue_updateAvailableModuleMetadataForAllModuleMetadata:(id)arg1 ;
-(id)_initWithDirectoryURLs:(id)arg1 allowedModuleIdentifiers:(id)arg2 ;
-(id)_queue_filterModuleMetadataByGestalt:(id)arg1 ;
-(void)_queue_stopObservingGestaltQuestions;
-(id)moduleMetadataForModuleIdentifier:(id)arg1 ;
-(NSSet *)loadableModuleIdentifiers;
-(void)_queue_updateAllModuleMetadata;
-(void)_queue_updateGestaltQuestionsForModuleMetadata:(id)arg1 ;
-(id)_queue_filterModuleMetadataByVisibilityPreference:(id)arg1 ;
-(id)_queue_moduleIdentifiersForMetadata:(id)arg1 ;
-(void)_queue_updateInterestingBundleIdentifiersForModuleMetadata:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)_queue_registerForVisiblityPreferenceChanges;
-(void)_queue_updateAvailableModuleMetadata;
-(id)_queue_filterModuleMetadataByAssociatedBundleAvailability:(id)arg1 ;
-(void)invalidate;
-(void)_queue_updateLoadableModuleMetadataForAvailableModuleMetadata:(id)arg1 ;
@end
