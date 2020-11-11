/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NotesShared/ICNoteContainer.h>
#import <libobjc.A.dylib/ICCloudObject.h>

@class NSString, NSDate, NSSet, ICAccount, NSData, NSNumber, NSArray;

@interface ICFolder : ICNoteContainer <ICCloudObject>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSDate * dateForLastTitleModification; 
@property (nonatomic,retain) NSSet * notes; 
@property (nonatomic,retain) ICFolder * parent; 
@property (nonatomic,retain) NSSet * children; 
@property (nonatomic,retain) NSDate * parentModificationDate; 
@property (nonatomic,retain) ICAccount * account; 
@property (nonatomic,readonly) BOOL isDefaultFolderForAccount; 
@property (assign,nonatomic) BOOL importedFromLegacy; 
@property (assign,nonatomic) short folderType; 
@property (nonatomic,retain) NSData * mergeableData; 
@property (nonatomic,retain) NSNumber * customNoteSortTypeValue; 
@property (nonatomic,retain) NSDate * customNoteSortTypeModificationDate; 
@property (nonatomic,readonly) NSArray * ancestorFolderObjectIDs; 
+(id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)newPlaceholderObjectForRecordName:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)shareType;
+(id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)englishTitleForDefaultFolder;
+(id)englishTitleForTrashFolder;
+(id)deduplicatingTitle:(id)arg1 forFolder:(id)arg2 forNewFolderParent:(id)arg3 ofAccount:(id)arg4 ;
+(unsigned long long)maximumDepthOfFolders:(id)arg1 ;
+(id)localizedNewFolderName;
+(id)deduplicatingTitle:(id)arg1 forFolder:(id)arg2 ofAccount:(id)arg3 ;
+(id)reservedFolderTitles;
+(id)localizedTitleForDefaultFolder;
+(void)deleteFolder:(id)arg1 ;
+(id)localizedTitleForTrashFolder;
+(id)keyPathsForValuesAffectingIsSharedViaICloud;
+(id)stringByScrubbingStringForFolderName:(id)arg1 ;
+(id)keyPathsForValuesAffectingCustomNoteSortType;
+(unsigned long long)folderDepthLimit;
+(id)keyPathsForValuesAffectingSupportsCustomNoteSortType;
+(id)keyPathsForValuesAffectingIsLeaf;
+(id)keyPathsForValuesAffectingDepth;
+(unsigned long long)maximumDistanceToLeafFolderOfFolders:(id)arg1 ;
+(id)keyPathsForValuesAffectingIsTrashFolder;
+(id)keyPathsForValuesAffectingVisibleNoteContainerChildren;
+(id)keyPathsForValuesAffectingIsDefaultFolderForAccount;
+(id)keyPathsForValuesAffectingTitleForTableViewCell;
+(id)keyPathsForValuesAffectingSupportsEditingNotes;
+(id)purgableFoldersFetchRequest;
+(id)newFolderWithIdentifier:(id)arg1 account:(id)arg2 ;
+(id)newFolderWithIdentifier:(id)arg1 parentFolder:(id)arg2 ;
+(id)foldersMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)predicateForVisibleFoldersInContext:(id)arg1 ;
+(id)predicateForNotesInFolder:(id)arg1 ;
+(id)predicateForVisibleFoldersIncludingHiddenNoteContainers:(BOOL)arg1 inContext:(id)arg2 ;
+(id)predicateForFoldersInFolder:(id)arg1 ;
+(id)newFolderInAccount:(id)arg1 ;
+(id)newFolderInParentFolder:(id)arg1 ;
+(void)purgeFolder:(id)arg1 ;
+(id)defaultFolderInContext:(id)arg1 ;
+(id)folderWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)allFoldersInContext:(id)arg1 ;
+(id)visibleFoldersInContext:(id)arg1 ;
+(unsigned long long)countOfFoldersMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)rootSharingFolderForNote:(id)arg1 ;
+(id)predicateForVisibleObjects;
+(BOOL)supportsUserSpecificRecords;
+(id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+(id)keyPathsForValuesAffectingVisibleNotesCount;
-(id)accountName;
-(id)cacheKey;
-(id)localizedTitle;
-(void)awakeFromFetch;
-(void)setParent:(ICFolder *)arg1 ;
-(BOOL)hasAllMandatoryFields;
-(id)shareType;
-(BOOL)mergeWithMergeableData:(id)arg1 ;
-(id)newlyCreatedUserSpecificRecord;
-(void)objectWasDeletedFromCloudByAnotherDevice;
-(void)deleteFromLocalDatabase;
-(id)recordType;
-(void)setAccount:(ICAccount *)arg1 ;
-(id)predicateForVisibleNotes;
-(id)predicateForPinnedNotes;
-(long long)compare:(id)arg1 ;
-(BOOL)isDeletable;
-(id)containerIdentifier;
-(long long)intrinsicNotesVersion;
-(void)setMarkedForDeletion:(BOOL)arg1 ;
-(void)resetUniqueIdentifier;
-(void)markForDeletion;
-(BOOL)supportsCustomNoteSortType;
-(BOOL)isSystemFolder;
-(BOOL)isDefaultFolderForAccount;
-(BOOL)isSubfolderOfReadonlyFolder;
-(unsigned long long)maximumDepthIncludingChildFolders;
-(unsigned long long)maximumDistanceToLeafFolder;
-(BOOL)canMoveAddOrDeleteContents;
-(id)visibleNoteContainerChildrenUnsorted;
-(void)updateSortOrder;
-(BOOL)isDefaultFolderOrDescendantOfDefaultFolder;
-(BOOL)isMovable;
-(BOOL)isLeaf;
-(id)predicateForSearchableNotes;
-(id)predicateForSearchableAttachments;
-(BOOL)isAncestorOfFolder:(id)arg1 ;
-(id)visibleNotesIncludingChildFolders;
-(id)visibleNotesInFolder;
-(void)recrusivelyAddSubfoldersToArray:(id)arg1 ;
-(unsigned long long)countOfVisibleNotesInFolder;
-(id)predicateForVisibleNotesInFolder;
-(id)predicateForPinnedNotesInFolder;
-(id)predicateForVisibleAttachmentsInFolder;
-(id)predicateForVisibleAttachments;
-(id)recordZoneName;
-(id)recursiveVisibleSubfolders;
-(BOOL)containsSharedDescendantFolders:(BOOL*)arg1 ;
-(BOOL)containsSharedNotesOrSharedDescendantFolders:(BOOL*)arg1 ;
-(id)rootSharingFolder;
-(BOOL)isSharedViaSharedFolder:(id)arg1 ;
-(id)rootSharedNotesIncludingChildFolders;
-(id)rootSharedFoldersInDescendantsIncludingSelf;
-(void)setCustomNoteSortType:(id)arg1 ;
-(BOOL)canAddSubfolder;
-(unsigned long long)visibleChildrenCount;
-(unsigned long long)indexOfVisibleChild:(id)arg1 ;
-(NSArray *)ancestorFolderObjectIDs;
-(id)titleForNavigationBar;
-(id)visibleNotes;
-(unsigned long long)visibleNotesCount;
-(id)titleForTableViewCell;
-(BOOL)canBeSharedViaICloud;
-(BOOL)isTrashFolder;
-(BOOL)isRenamable;
-(BOOL)isModernCustomFolder;
-(id)customNoteSortType;
-(BOOL)supportsEditingNotes;
-(id)visibleSubFolders;
-(id)subFolderOrderMergeableData;
-(void)setSubFolderOrderMergeableData:(id)arg1 ;
-(BOOL)shouldSyncMinimumSupportedNotesVersion;
-(void)setNeedsInitialFetchFromCloud:(BOOL)arg1 ;
-(BOOL)containsVisibleLockedNotesIncludingChildFolders:(BOOL)arg1 ;
-(BOOL)validateTitle:(inout id*)arg1 error:(out id*)arg2 ;
-(BOOL)isTitleValid:(id)arg1 error:(out id*)arg2 ;
-(BOOL)visibleChildFoldersContainsFolderWithTitle:(id)arg1 ;
-(BOOL)containsSharedDescendantFolders;
-(BOOL)containsSharedNotesOrSharedDescendantFolders;
-(BOOL)hasSharedContentsNotSharedViaSharedFolder:(id)arg1 ;
-(id)noteVisibilityTestingForSearchingAccount;
-(id)predicateForFoldersInFolder;
-(id)predicateForNotesInFolder;
-(id)predicateForAttachmentsInFolder;
-(id)pinnedNotesInFolder;
-(id)foldersInFolder;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isDescendantOfFolder:(id)arg1 ;
-(id)newlyCreatedRecord;
-(void)saveMergeableDataIfNeeded;
-(void)unmarkForDeletionIncludingParentHierarchy;
-(void)mergeParentFromRecord:(id)arg1 ;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg1 accountID:(id)arg2 ;
-(void)fixBrokenReferences;
-(void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2 ;
-(void)mergeDataFromUserSpecificRecord:(id)arg1 accountID:(id)arg2 ;
-(BOOL)isInICloudAccount;
-(id)objectsToBeDeletedBeforeThisObject;
-(id)parentCloudObject;
-(id)childCloudObjects;
-(BOOL)canBeRootShareObject;
-(id)shareTitle;
-(id)visibleNoteContainerChildren;
-(void)updateChangeCount;
-(id)ic_loggingValues;
-(unsigned long long)depth;
@end
