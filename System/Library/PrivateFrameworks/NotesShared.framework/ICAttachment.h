/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICCloudSyncingObject.h>
#import <libobjc.A.dylib/ICCloudObject.h>
#import <libobjc.A.dylib/ICSearchIndexable.h>

@class ICAttachmentModel, NSURL, NSDictionary, AVAsset, NSString, ICAttachmentLocation, ICMedia, NSData, ICNote, NSSet, NSDate;

@interface ICAttachment : ICCloudSyncingObject <ICCloudObject, ICSearchIndexable> {

	short _attachmentType;
	ICAttachmentModel* _attachmentModel;
	BOOL settingMergeableData;
	NSURL* _remoteFileURL;
	NSDictionary* _metadata;
	NSURL* _URL;
	AVAsset* _movie;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSURL * URL;                                                          //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) AVAsset * movie;                                                      //@synthesize movie=_movie - In the implementation block
@property (assign,getter=isSettingMergeableData,nonatomic) BOOL settingMergeableData; 
@property (assign,nonatomic) long long minimumSupportedNotesVersion; 
@property (assign,nonatomic) double sizeHeight; 
@property (assign,nonatomic) double sizeWidth; 
@property (assign,nonatomic) double originX; 
@property (assign,nonatomic) double originY; 
@property (assign,nonatomic) short orientation; 
@property (nonatomic,retain) NSString * urlString; 
@property (nonatomic,retain) NSString * typeUTI; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * userTitle; 
@property (nonatomic,retain) NSString * additionalIndexableText; 
@property (nonatomic,retain) ICAttachmentLocation * location; 
@property (nonatomic,retain) ICMedia * media; 
@property (nonatomic,retain) NSData * mergeableData; 
@property (assign,nonatomic) BOOL needsInitialRelationshipSetup; 
@property (nonatomic,retain) ICNote * note; 
@property (nonatomic,retain) ICNote * noteUsingTitleForNoteTitle; 
@property (nonatomic,retain) NSSet * previewImages; 
@property (nonatomic,retain) NSDate * previewUpdateDate; 
@property (nonatomic,retain) ICAttachment * parentAttachment; 
@property (nonatomic,readonly) ICAttachment * rootParentAttachment; 
@property (nonatomic,retain) NSSet * subAttachments; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSDate * modificationDate; 
@property (nonatomic,retain) NSString * remoteFileURLString; 
@property (nonatomic,retain) NSURL * remoteFileURL;                                                //@synthesize remoteFileURL=_remoteFileURL - In the implementation block
@property (nonatomic,retain) NSData * metadataData; 
@property (nonatomic,retain) NSDictionary * metadata;                                              //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) short section; 
@property (assign,nonatomic) BOOL checkedForLocation; 
@property (assign,nonatomic) BOOL hasMarkupData; 
@property (nonatomic,retain) NSData * markupModelData; 
@property (assign,nonatomic) long long fileSize; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) short imageFilterType; 
@property (assign,nonatomic) double croppingQuadBottomLeftX; 
@property (assign,nonatomic) double croppingQuadBottomLeftY; 
@property (assign,nonatomic) double croppingQuadBottomRightX; 
@property (assign,nonatomic) double croppingQuadBottomRightY; 
@property (assign,nonatomic) double croppingQuadTopLeftX; 
@property (assign,nonatomic) double croppingQuadTopLeftY; 
@property (assign,nonatomic) double croppingQuadTopRightX; 
@property (assign,nonatomic) double croppingQuadTopRightY; 
@property (nonatomic,readonly) BOOL hasCroppingQuad; 
@property (nonatomic,retain) NSData * fallbackImageCryptoTag; 
@property (nonatomic,retain) NSData * fallbackImageCryptoInitializationVector; 
@property (nonatomic,retain) NSString * summary; 
@property (nonatomic,retain) NSString * handwritingSummary; 
@property (assign,nonatomic) short handwritingSummaryVersion; 
@property (nonatomic,retain) NSString * imageClassificationSummary; 
@property (assign,nonatomic) short imageClassificationSummaryVersion; 
@property (nonatomic,retain) NSString * ocrSummary; 
@property (assign,nonatomic) short ocrSummaryVersion; 
@property (nonatomic,retain) NSString * fallbackTitle; 
@property (nonatomic,retain) NSString * fallbackSubtitleIOS; 
@property (nonatomic,retain) NSString * fallbackSubtitleMac; 
@property (nonatomic,readonly) BOOL isReadOnly; 
+(id)newAttachmentWithIdentifier:(id)arg1 note:(id)arg2 ;
+(void)initialize;
+(id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(void)deleteAttachment:(id)arg1 ;
+(void)undeleteAttachment:(id)arg1 ;
+(id)predicateForSearchableAttachmentsInContext:(id)arg1 ;
+(id)filenameExtensionForUTI:(id)arg1 ;
+(id)filenameFromUTI:(id)arg1 ;
+(id)defaultTitleForAttachmentType:(short)arg1 ;
+(id)noteFromAttachmentRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(void)ensureFallbackImageDirectoryExistsForAccount:(id)arg1 ;
+(id)attachmentWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)attachmentsMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)fallbackImageURLForIdentifier:(id)arg1 account:(id)arg2 ;
+(id)fallbackImageEncryptedURLForIdentifier:(id)arg1 account:(id)arg2 ;
+(BOOL)typeUTIIsPlayableMovie:(id)arg1 ;
+(BOOL)typeUTIIsPlayableAudio:(id)arg1 ;
+(short)sectionFromTypeUTI:(id)arg1 url:(id)arg2 ;
+(BOOL)typeUTIIsImage:(id)arg1 ;
+(BOOL)typeUTIIsDrawing:(id)arg1 ;
+(BOOL)typeUTIIsInlineDrawing:(id)arg1 ;
+(id)attachmentIdentifiersForAccount:(id)arg1 ;
+(void)addPreviewImages:(id)arg1 toRecord:(id)arg2 ;
+(void)purgeAttachment:(id)arg1 ;
+(BOOL)isTypeUTISupportedForPasswordProtectedNotes:(id)arg1 ;
+(id)keyPathsForValuesAffectingIsSharedViaICloud;
+(id)isBeingEditedLocallyOnDeviceSet;
+(id)attachmentSectionSortOrder;
+(BOOL)isPathExtensionSupportedForPasswordProtectedNotes:(id)arg1 ;
+(void)purgeAttachmentFilesForIdentifiers:(id)arg1 account:(id)arg2 ;
+(id)attachmentWithIdentifier:(id)arg1 includeDeleted:(BOOL)arg2 context:(id)arg3 ;
+(id)predicateForVisibleAttachmentsIncludingTrash:(BOOL)arg1 inContext:(id)arg2 ;
+(id)predicateForPasswordProtected:(BOOL)arg1 ;
+(id)attachmentTypeUTIsToHideFromAttachmentBrowser;
+(id)newFetchRequestForAttachments;
+(unsigned long long)countOfAttachmentsMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)predicateForVisibleAttachmentsIncludingTrashInContext:(id)arg1 ;
+(id)predicateForVisibleAttachmentsInContext:(id)arg1 ;
+(void)purgeAllAttachmentsInContext:(id)arg1 ;
+(id)visibleAttachmentsInContext:(id)arg1 ;
+(id)predicateForAttachmentBrowserWithContext:(id)arg1 ;
+(id)predicateForInlineDrawing;
+(id)notDeletedPredicate;
+(id)fallbackImageDirectoryURL;
+(id)predicateForVisibleObjects;
+(id)allAttachmentsInContext:(id)arg1 ;
+(id)mimeTypeFromUTI:(id)arg1 ;
+(id)internalImageCache;
+(id)keyPathsForValuesAffectingParentCloudObject;
-(NSString *)summary;
-(BOOL)isVisible;
-(void)prepareForDeletion;
-(void)willSave;
-(void)willTurnIntoFault;
-(AVAsset *)movie;
-(void)awakeFromFetch;
-(CGSize)intrinsicContentSize;
-(NSString *)urlString;
-(BOOL)hasAllMandatoryFields;
-(BOOL)isFolder;
-(BOOL)isReadOnly;
-(id)newlyCreatedRecordWithObfuscator:(id)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(BOOL)isURL;
-(BOOL)isMap;
-(id)addLocationWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(void)writeFallbackImageData:(id)arg1 ;
-(void)loadPreviewArchive:(const PreviewImage*)arg1 previewDataIdentifier:(id)arg2 dataPersister:(id)arg3 ;
-(id)updateAttachmentPreviewImageWithImageData:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 appearanceType:(unsigned long long)arg4 scaleWhenDrawing:(BOOL)arg5 metadata:(id)arg6 sendNotification:(BOOL)arg7 ;
-(void)deleteFromLocalDatabase;
-(id)recordType;
-(NSURL *)remoteFileURL;
-(NSData *)markupModelData;
-(BOOL)hasCroppingQuad;
-(BOOL)hasFallbackImage;
-(BOOL)needsToBeRequested;
-(id)attachmentPreviewImageWithMinSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)contentIdentifier;
-(id)addMediaWithFileWrapper:(id)arg1 ;
-(void)updatePlaceInLocationIfNeededHandler:(/*^block*/id)arg1 ;
-(void)setRemoteFileURL:(NSURL *)arg1 ;
-(void)setTypeUTI:(NSString *)arg1 ;
-(id)addMediaWithURL:(id)arg1 updateFileBasedAttributes:(BOOL)arg2 ;
-(void)savePreview:(id)arg1 toArchive:(PreviewImage*)arg2 previewDataIdentifier:(id)arg3 dataPersister:(id)arg4 ;
-(BOOL)supportsQuickLook;
-(void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2 newAttachment:(BOOL)arg3 ;
-(BOOL)isChildOfDocumentGallery;
-(BOOL)isNews;
-(void)setNote:(ICNote *)arg1 ;
-(id)parentAttachmentFromRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
-(NSString *)handwritingSummary;
-(NSString *)imageClassificationSummary;
-(NSString *)ocrSummary;
-(BOOL)isInNoteTitleOrSnippet;
-(void)updatePreviewsFromRecord:(id)arg1 ;
-(id)fallbackImageEncryptedURL;
-(id)fallbackImageURL;
-(id)addMediaWithData:(id)arg1 filename:(id)arg2 updateFileBasedAttributes:(BOOL)arg3 ;
-(BOOL)isDrawing;
-(NSDictionary *)metadata;
-(id)searchableTextContent;
-(BOOL)isTable;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)isUnsupported;
-(long long)intrinsicNotesVersion;
-(BOOL)hasMetadata;
-(BOOL)isSettingMergeableData;
-(id)tableModel;
-(void)attachmentDidChange;
-(void)resetUniqueIdentifier;
-(void)setMovie:(AVAsset *)arg1 ;
-(id)dataSourceIdentifier;
-(void)markForDeletion;
-(void)willRefresh:(BOOL)arg1 ;
-(void)didRefresh:(BOOL)arg1 ;
-(BOOL)isMovable;
-(id)previewItemTitle;
-(id)previewItemURL;
-(NSString *)description;
-(NSString *)fallbackTitle;
-(void)loadFromArchive:(const Attachment*)arg1 dataPersister:(id)arg2 withIdentifierMap:(id)arg3 ;
-(id)userActivityContentAttributeSet;
-(long long)visibilityTestingType;
-(unsigned long long)searchResultsSection;
-(BOOL)searchResultCanBeDeletedFromNoteContext;
-(BOOL)isHiddenFromSearch;
-(id)authorsExcludingCurrentUser;
-(id)searchIndexingIdentifier;
-(id)searchableItemAttributeSet;
-(id)dataForTypeIdentifier:(id)arg1 ;
-(id)fileURLForTypeIdentifier:(id)arg1 ;
-(void)saveToArchive:(Attachment*)arg1 dataPersister:(id)arg2 stripImageMarkupMetadata:(BOOL)arg3 ;
-(unsigned long long)approximateArchiveSizeIncludingPreviews:(BOOL)arg1 ;
-(void)invalidateAttachmentPreviewImages;
-(void)updateAttachmentSectionWithTypeUTI:(id)arg1 ;
-(ICAttachment *)rootParentAttachment;
-(id)recordZoneName;
-(void)setFallbackSubtitleIOS:(NSString *)arg1 ;
-(void)setFallbackSubtitleMac:(NSString *)arg1 ;
-(void)fixMarkedForDeletionForScannedDocuments;
-(NSString *)fallbackSubtitleIOS;
-(NSString *)fallbackSubtitleMac;
-(void)updateMarkedForDeletionStateAttachmentIsInNote:(BOOL)arg1 ;
-(void)recursivelyAddSubAttachments:(id)arg1 ;
-(void)updateCombinedSummary;
-(void)setSettingMergeableData:(BOOL)arg1 ;
-(void)setAdditionalIndexableText:(NSString *)arg1 ;
-(BOOL)isAppStore;
-(BOOL)supportsRenaming;
-(id)previewImageCacheKey;
-(BOOL)supportsSavingAttachmentToExternalFile;
-(BOOL)isLoadingFromCloud;
-(id)unsupportedAttachmentTitle;
-(id)unsupportedAttachmentSubtitle;
-(BOOL)locationNeedsUpdate;
-(id)attachmentPreviewImageCreatingIfNecessaryWithWidth:(double)arg1 height:(double)arg2 scale:(double)arg3 appearanceType:(unsigned long long)arg4 scaleWhenDrawing:(BOOL)arg5 metadata:(id)arg6 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)saveAndClearDecryptedData;
-(void)accountWillChangeToAccount:(id)arg1 ;
-(BOOL)shouldSyncMinimumSupportedNotesVersion;
-(BOOL)shouldEmbedMarkupDataInMedia;
-(void)deleteAttachmentPreviewImages;
-(void)undeleteAttachmentPreviewImages;
-(void)addLocationIfNeeded;
-(void)regenerateTitle;
-(id)parentEncryptableObject;
-(void)setFallbackTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)fileSizeString;
-(void)updateAfterMediaChange;
-(id)addMediaWithData:(id)arg1 filename:(id)arg2 ;
-(id)addMediaWithURL:(id)arg1 ;
-(void)purgeAttachmentPreviewImages;
-(BOOL)checkPreviewImagesIntegrity;
-(id)attachmentPreviewImageWithMinSize:(CGSize)arg1 scale:(double)arg2 appearanceType:(unsigned long long)arg3 ;
-(id)drawingModel;
-(id)galleryModel;
-(id)inlineDrawingModel;
-(id)searchDomainIdentifier;
-(CGRect)bounds;
-(id)attachmentPreviewImageWithMinSize:(CGSize)arg1 scale:(double)arg2 appearanceType:(unsigned long long)arg3 requireAppearance:(BOOL)arg4 ;
-(id)attachmentPreviewImageWithMinSize:(CGSize)arg1 scale:(double)arg2 appearanceType:(unsigned long long)arg3 matchScale:(BOOL)arg4 matchAppearance:(BOOL)arg5 ;
-(id)updateAttachmentPreviewImageWithImageSrc:(CGImageSourceRef)arg1 maxDimension:(double)arg2 scale:(double)arg3 appearanceType:(unsigned long long)arg4 scaleWhenDrawing:(BOOL)arg5 metadata:(id)arg6 sendNotification:(BOOL)arg7 ;
-(NSString *)userTitle;
-(void)setOrientation:(short)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)defaultTitle;
-(BOOL)isiTunes;
-(id)imageCacheKey;
-(BOOL)hasAnyPNGPreviewImageFiles;
-(BOOL)needsToBePushedToCloud;
-(NSString *)additionalIndexableText;
-(id)fallbackImageData;
-(id)fallbackImageUTI;
-(BOOL)previewsSupportMultipleAppearances;
-(BOOL)preferLocalPreviewImages;
-(BOOL)supportsDeletionByTTL;
-(void)setSummary:(NSString *)arg1 ;
-(short)attachmentType;
-(NSData *)mergeableData;
-(void)setUserTitle:(NSString *)arg1 ;
-(void)setImageFilterType:(short)arg1 ;
-(void)setMarkupModelData:(NSData *)arg1 ;
-(unsigned long long)searchResultType;
-(id)searchableTextContentWithoutTitle;
-(void)didTurnIntoFault;
-(id)newlyCreatedRecord;
-(id)attachmentModel;
-(BOOL)isBeingEditedLocallyOnDevice;
-(void)setIsBeingEditedLocallyOnDevice:(BOOL)arg1 ;
-(void)setParentAttachment:(ICAttachment *)arg1 ;
-(void)setMergeableData:(NSData *)arg1 ;
-(void)saveMergeableDataIfNeeded;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg1 accountID:(id)arg2 ;
-(void)fixBrokenReferences;
-(void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2 ;
-(void)updateParentReferenceIfNecessary;
-(id)parentCloudObjectForMinimumSupportedVersionPropagation;
-(BOOL)isInICloudAccount;
-(id)objectsToBeDeletedBeforeThisObject;
-(BOOL)isEncryptableKeyBinaryData:(id)arg1 ;
-(id)mergeDecryptedValue:(id)arg1 withOldValue:(id)arg2 forKey:(id)arg3 ;
-(void)setHandwritingSummary:(NSString *)arg1 ;
-(void)setImageClassificationSummary:(NSString *)arg1 ;
-(void)setOcrSummary:(NSString *)arg1 ;
-(NSRange)rangeInNote;
-(id)parentCloudObject;
-(id)childCloudObjects;
-(void)clearCachedImages;
-(void)unmarkForDeletion;
-(id)ic_loggingValues;
-(void)setUrlString:(NSString *)arg1 ;
-(NSURL *)URL;
-(void)dealloc;
-(id)childCloudObjectsForMinimumSupportedVersionPropagation;
@end

