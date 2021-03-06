/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/Photos-Structs.h>
#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class PHAsset, NSURL, CLLocation, NSString, NSData, NSSet, NSDate, NSMutableDictionary, PHRelationshipChangeRequestHelper, PHContentEditingOutput, NSIndexSet, NSArray, PHObjectPlaceholder, NSManagedObjectID;

@interface PHAssetChangeRequest : PHChangeRequest <PHUpdateChangeRequest> {

	int _clientProcessIdentifier;
	BOOL _clientEntitled;
	PHAsset* _originalAsset;
	NSURL* _editorBundleURL;
	CLLocation* _updatedLocation;
	NSString* _assetDescription;
	NSString* _accessibilityDescription;
	NSString* _title;
	SCD_Struct_PH9 _bestKeyFrameTime;
	NSData* _bestKeyFrameJPEGData;
	BOOL _didSetTitle;
	BOOL _didSetVisibilityState;
	BOOL _didSetSceneClassifications;
	NSSet* _sceneClassifications;
	short _sceneAnalysisVersion;
	NSDate* _sceneAnalysisTimestamp;
	NSData* _distanceIdentity;
	BOOL _allowUnsafeSetProcessed;
	BOOL _incrementPlayCount;
	BOOL _incrementShareCount;
	NSDate* _lastSharedDate;
	BOOL _incrementViewCount;
	BOOL _toRetryUpload;
	BOOL _didSetVariationSuggestionStates;
	unsigned long long _variationSuggestionStates;
	unsigned long long _variationSuggestionStatesMask;
	BOOL _revealNonPrimaryAssetsInAssetGroup;
	BOOL _hideNonPrimaryAssetsInAssetGroup;
	BOOL _didModifyComputedAttributes;
	NSMutableDictionary* _computedAttributeMutations;
	BOOL _didSetPackedPreferredCropRect;
	BOOL _didSetPackedAcceptableCropRect;
	BOOL _didSetPackedBestPlaybackRect;
	long long _packedPreferredCropRect;
	long long _packedAcceptableCropRect;
	long long _packedBestPlaybackRect;
	BOOL _didUnsetBestKeyFrameTime;
	BOOL _didSetMediaAnalysisTimeStamp;
	BOOL _didSetMediaAnalysisVersion;
	BOOL _didSetBlurrinessScore;
	BOOL _didSetExposureScore;
	BOOL _didSetAutoplaySuggestionScore;
	BOOL _didSetVideoScore;
	BOOL _didSetActivityScore;
	BOOL _didSetFaceCount;
	BOOL _didSetAudioClassification;
	BOOL _didSetSceneprintData;
	BOOL _didSetReverseLocationData;
	BOOL _didSetReverseLocationDataIsValid;
	BOOL _didSetShiftedLocation;
	BOOL _didSetOriginalResourceChoice;
	BOOL _didRevertLocationToOriginal;
	BOOL _didRemoveFromPhotoStream;
	BOOL _didExpungeAllSpatialOverCaptureResources;
	BOOL _didTrashAllSpatialOverCaptureResources;
	BOOL _didUntrashAllSpatialOverCaptureResources;
	BOOL _didExpungeTrashedSpatialOverCaptureResources;
	BOOL _didSetReframeVariation;
	BOOL _performCameraProcessingAdjustment;
	NSData* _objectSaliencyRectsData;
	BOOL _didSetObjectSaliencyRectsData;
	BOOL _didSetTimeZone;
	NSString* _timeZoneName;
	long long _timeZoneOffsetValue;
	NSSet* _keywordTitles;
	BOOL _didSetKeywordTitles;
	PHRelationshipChangeRequestHelper* _keywordsHelper;
	BOOL _didSetGpsHorizontalAccuracy;
	BOOL _didChangeAdjustments;
	BOOL _duplicateAllowsPrivateMetadata;
	BOOL _reverseLocationDataIsValid;
	unsigned short _photoIrisVisibilityState;
	short _audioClassification;
	float _testScore;
	float _blurrinessScore;
	float _exposureScore;
	float _autoplaySuggestionScore;
	float _videoScore;
	float _activityScore;
	unsigned long long _originalResourceChoice;
	PHContentEditingOutput* _contentEditingOutput;
	NSString* _editorBundleID;
	NSIndexSet* _supportedEditOperations;
	NSURL* _videoURLForUpdate;
	NSString* _pairingIdentifier;
	PHRelationshipChangeRequestHelper* _facesHelper;
	NSDate* _alternateImportImageDate;
	unsigned long long _reframeVariation;
	double _gpsHorizontalAccuracy;
	NSArray* _objectSaliencyRects;
	NSDate* _mediaAnalysisTimeStamp;
	unsigned long long _mediaAnalysisVersion;
	unsigned long long _faceCount;
	NSData* _sceneprintData;
	NSData* _reverseLocationData;
	CLLocation* _shiftedLocation;
	SCD_Struct_PH9 _videoDuration;
	SCD_Struct_PH9 _imageDisplayTime;
	SCD_Struct_PH12 _bestVideoTimeRange;

}

@property (nonatomic,readonly) BOOL didChangeAdjustments;                                     //@synthesize didChangeAdjustments=_didChangeAdjustments - In the implementation block
@property (nonatomic,copy,readonly) NSString * editorBundleID;                                //@synthesize editorBundleID=_editorBundleID - In the implementation block
@property (nonatomic,retain) NSIndexSet * supportedEditOperations;                            //@synthesize supportedEditOperations=_supportedEditOperations - In the implementation block
@property (nonatomic,retain) NSURL * videoURLForUpdate;                                       //@synthesize videoURLForUpdate=_videoURLForUpdate - In the implementation block
@property (nonatomic,retain) NSString * pairingIdentifier;                                    //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH9 videoDuration;                                    //@synthesize videoDuration=_videoDuration - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * facesHelper;               //@synthesize facesHelper=_facesHelper - In the implementation block
@property (nonatomic,readonly) BOOL duplicateAllowsPrivateMetadata;                           //@synthesize duplicateAllowsPrivateMetadata=_duplicateAllowsPrivateMetadata - In the implementation block
@property (nonatomic,retain) NSDate * alternateImportImageDate;                               //@synthesize alternateImportImageDate=_alternateImportImageDate - In the implementation block
@property (assign,nonatomic) unsigned short photoIrisVisibilityState;                         //@synthesize photoIrisVisibilityState=_photoIrisVisibilityState - In the implementation block
@property (assign,nonatomic) unsigned long long reframeVariation;                             //@synthesize reframeVariation=_reframeVariation - In the implementation block
@property (nonatomic,retain) NSString * assetDescription; 
@property (nonatomic,retain) NSString * accessibilityDescription; 
@property (nonatomic,retain) NSDate * addedDate; 
@property (assign,nonatomic) unsigned long long originalResourceChoice;                       //@synthesize originalResourceChoice=_originalResourceChoice - In the implementation block
@property (nonatomic,retain) NSDate * modificationDate; 
@property (nonatomic,retain) id faceAdjustmentVersion; 
@property (assign,nonatomic) SCD_Struct_PH9 imageDisplayTime;                                 //@synthesize imageDisplayTime=_imageDisplayTime - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) double curationScore; 
@property (assign,nonatomic) float overallAestheticScore; 
@property (assign,nonatomic) float wellFramedSubjectScore; 
@property (assign,nonatomic) float wellChosenSubjectScore; 
@property (assign,nonatomic) float tastefullyBlurredScore; 
@property (assign,nonatomic) float sharplyFocusedSubjectScore; 
@property (assign,nonatomic) float wellTimedShotScore; 
@property (assign,nonatomic) float pleasantLightingScore; 
@property (assign,nonatomic) float pleasantReflectionsScore; 
@property (assign,nonatomic) float harmoniousColorScore; 
@property (assign,nonatomic) float livelyColorScore; 
@property (assign,nonatomic) float pleasantSymmetryScore; 
@property (assign,nonatomic) float pleasantPatternScore; 
@property (assign,nonatomic) float immersivenessScore; 
@property (assign,nonatomic) float pleasantPerspectiveScore; 
@property (assign,nonatomic) float pleasantPostProcessingScore; 
@property (assign,nonatomic) float noiseScore; 
@property (assign,nonatomic) float failureScore; 
@property (assign,nonatomic) float pleasantCompositionScore; 
@property (assign,nonatomic) float interestingSubjectScore; 
@property (assign,nonatomic) float intrusiveObjectPresenceScore; 
@property (assign,nonatomic) float pleasantCameraTiltScore; 
@property (assign,nonatomic) float lowLight; 
@property (assign,nonatomic) float testScore;                                                 //@synthesize testScore=_testScore - In the implementation block
@property (assign,nonatomic) float behavioralScore; 
@property (assign,nonatomic) float interactionScore; 
@property (assign,nonatomic) double highlightPromotionScore; 
@property (assign,nonatomic) double highlightVisibilityScore; 
@property (assign,nonatomic) double gpsHorizontalAccuracy;                                    //@synthesize gpsHorizontalAccuracy=_gpsHorizontalAccuracy - In the implementation block
@property (nonatomic,retain) NSArray * objectSaliencyRects;                                   //@synthesize objectSaliencyRects=_objectSaliencyRects - In the implementation block
@property (nonatomic,retain) NSDate * mediaAnalysisTimeStamp;                                 //@synthesize mediaAnalysisTimeStamp=_mediaAnalysisTimeStamp - In the implementation block
@property (assign,nonatomic) unsigned long long mediaAnalysisVersion;                         //@synthesize mediaAnalysisVersion=_mediaAnalysisVersion - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH12 bestVideoTimeRange;                              //@synthesize bestVideoTimeRange=_bestVideoTimeRange - In the implementation block
@property (assign,nonatomic) float blurrinessScore;                                           //@synthesize blurrinessScore=_blurrinessScore - In the implementation block
@property (assign,nonatomic) float exposureScore;                                             //@synthesize exposureScore=_exposureScore - In the implementation block
@property (assign,nonatomic) float autoplaySuggestionScore;                                   //@synthesize autoplaySuggestionScore=_autoplaySuggestionScore - In the implementation block
@property (assign,nonatomic) float videoScore;                                                //@synthesize videoScore=_videoScore - In the implementation block
@property (assign,nonatomic) float activityScore;                                             //@synthesize activityScore=_activityScore - In the implementation block
@property (assign,nonatomic) unsigned long long faceCount;                                    //@synthesize faceCount=_faceCount - In the implementation block
@property (assign,nonatomic) short audioClassification;                                       //@synthesize audioClassification=_audioClassification - In the implementation block
@property (nonatomic,retain) NSData * sceneprintData;                                         //@synthesize sceneprintData=_sceneprintData - In the implementation block
@property (nonatomic,retain) NSData * reverseLocationData;                                    //@synthesize reverseLocationData=_reverseLocationData - In the implementation block
@property (assign,nonatomic) BOOL reverseLocationDataIsValid;                                 //@synthesize reverseLocationDataIsValid=_reverseLocationDataIsValid - In the implementation block
@property (nonatomic,retain) CLLocation * shiftedLocation;                                    //@synthesize shiftedLocation=_shiftedLocation - In the implementation block
@property (nonatomic,copy) NSSet * keywordTitles;                                             //@synthesize keywordTitles=_keywordTitles - In the implementation block
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedAsset; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) CLLocation * location; 
@property (assign,getter=isFavorite,nonatomic) BOOL favorite; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (nonatomic,retain) PHContentEditingOutput * contentEditingOutput;                   //@synthesize contentEditingOutput=_contentEditingOutput - In the implementation block
@property (getter=isMutated,readonly) BOOL mutated; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled; 
@property (nonatomic,readonly) NSString * clientName; 
@property (nonatomic,readonly) long long accessScopeOptionsRequirement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)creationRequestForAssetFromImage:(id)arg1 ;
+(id)creationRequestForAssetFromImageAtFileURL:(id)arg1 ;
+(id)creationRequestForAssetFromVideoAtFileURL:(id)arg1 ;
+(void)undeleteAssets:(id)arg1 ;
+(void)deleteAssets:(id)arg1 ;
+(void)expungeAssets:(id)arg1 ;
+(id)_allAssetEditOperations;
+(id)changeRequestForAssetFromVideoFileURL:(id)arg1 imageAsset:(id)arg2 displayTime:(double)arg3 ;
+(id)changeRequestForAsset:(id)arg1 ;
+(void)_deleteAssets:(id)arg1 withOperation:(long long)arg2 topLevelSelector:(SEL)arg3 ;
+(id)creationRequestForAssetFromVideoComplementBundle:(id)arg1 ;
-(float)pleasantCompositionScore;
-(unsigned long long)faceCount;
-(float)pleasantPatternScore;
-(void)setKeywordTitles:(NSSet *)arg1 ;
-(void)setFavorite:(BOOL)arg1 ;
-(void)setHighlightPromotionScore:(double)arg1 ;
-(void)setInteractionScore:(float)arg1 ;
-(void)setAudioClassification:(short)arg1 ;
-(float)videoScore;
-(void)setVideoScore:(float)arg1 ;
-(NSDate *)addedDate;
-(float)intrusiveObjectPresenceScore;
-(void)setTestScore:(float)arg1 ;
-(float)tastefullyBlurredScore;
-(void)setTimeZone:(id)arg1 withDate:(id)arg2 ;
-(float)wellChosenSubjectScore;
-(short)audioClassification;
-(void)setReframeVariation:(unsigned long long)arg1 ;
-(NSString *)managedEntityName;
-(float)lowLight;
-(void)setReverseLocationData:(NSData *)arg1 ;
-(float)failureScore;
-(NSArray *)objectSaliencyRects;
-(double)gpsHorizontalAccuracy;
-(BOOL)_validateImageURLForAssetMutation:(id)arg1 error:(id*)arg2 ;
-(float)noiseScore;
-(float)pleasantSymmetryScore;
-(float)wellTimedShotScore;
-(void)setContentEditingOutput:(PHContentEditingOutput *)arg1 ;
-(float)livelyColorScore;
-(float)wellFramedSubjectScore;
-(float)interestingSubjectScore;
-(void)setPairingIdentifier:(NSString *)arg1 ;
-(float)interactionScore;
-(SCD_Struct_PH9)videoDuration;
-(float)pleasantPostProcessingScore;
-(void)revertLocationToOriginal;
-(NSString *)pairingIdentifier;
-(BOOL)isHidden;
-(void)setPleasantReflectionsScore:(float)arg1 ;
-(void)setAssetDescription:(NSString *)arg1 ;
-(PHRelationshipChangeRequestHelper *)facesHelper;
-(BOOL)validateContentEditingOutput:(id)arg1 error:(id*)arg2 ;
-(void)_validateObjectSaliencyRects:(id)arg1 ;
-(unsigned long long)reframeVariation;
-(float)immersivenessScore;
-(id)initWithHelper:(id)arg1 ;
-(void)setActivityScore:(float)arg1 ;
-(id)init;
-(NSData *)reverseLocationData;
-(float)activityScore;
-(void)setGpsHorizontalAccuracy:(double)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(void)setWellFramedSubjectScore:(float)arg1 ;
-(BOOL)duplicateAllowsPrivateMetadata;
-(void)setCurationScore:(double)arg1 ;
-(void)setFailureScore:(float)arg1 ;
-(NSDate *)alternateImportImageDate;
-(NSURL *)videoURLForUpdate;
-(void)addFaces:(id)arg1 ;
-(CLLocation *)location;
-(void)setPhotoIrisVisibilityState:(unsigned short)arg1 ;
-(void)revealNonPrimaryAssetsInAssetGroup;
-(void)setBestPlaybackRectWithNormalizedRect:(CGRect)arg1 ;
-(void)retryUpload;
-(void)setMediaAnalysisVersion:(unsigned long long)arg1 ;
-(void)setOverallAestheticScore:(float)arg1 ;
-(void)setFaceAdjustmentVersion:(id)arg1 ;
-(id)getMediaAnalysisAttributesForAsset:(id)arg1 ;
-(void)addKeywords:(id)arg1 ;
-(float)pleasantPerspectiveScore;
-(void)hideNonPrimaryAssetsInAssetGroup;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)setHighlightVisibilityScore:(double)arg1 ;
-(float)overallAestheticScore;
-(void)trashAllSpatialOverCaptureResources;
-(void)setCreationDate:(NSDate *)arg1 ;
-(float)pleasantReflectionsScore;
-(void)setSupportedEditOperations:(NSIndexSet *)arg1 ;
-(id)faceAdjustmentVersion;
-(void)setHarmoniousColorScore:(float)arg1 ;
-(void)setVariationSuggestionStates:(unsigned long long)arg1 forVariationType:(unsigned long long)arg2 ;
-(void)setBlurrinessScore:(float)arg1 ;
-(void)setPleasantCameraTiltScore:(float)arg1 ;
-(void)setBestKeyFrame:(CGImageRef)arg1 time:(SCD_Struct_PH9)arg2 ;
-(double)curationScore;
-(void)setAcceptableCropRectWithNormalizedRect:(CGRect)arg1 ;
-(NSString *)accessibilityDescription;
-(BOOL)isHiding;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)incrementViewCount;
-(void)expungeAllSpatialOverCaptureResources;
-(id)_existentKeywordObjectIDs;
-(PHObjectPlaceholder *)placeholderForCreatedAsset;
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(void)setIntrusiveObjectPresenceScore:(float)arg1 ;
-(void)setTastefullyBlurredScore:(float)arg1 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateWriteAccessForContentURL:(id)arg1 error:(id*)arg2 ;
-(void)setObjectSaliencyRects:(NSArray *)arg1 ;
-(BOOL)_validateAsyncContentEditingOutputPreviewRenderURLs:(id)arg1 error:(id*)arg2 ;
-(NSIndexSet *)supportedEditOperations;
-(void)setSharplyFocusedSubjectScore:(float)arg1 ;
-(void)setPleasantPatternScore:(float)arg1 ;
-(id)_mutableFaceObjectIDsAndUUIDs;
-(double)highlightPromotionScore;
-(float)autoplaySuggestionScore;
-(float)pleasantCameraTiltScore;
-(void)setShiftedLocation:(CLLocation *)arg1 ;
-(void)setAlternateImportImageDate:(NSDate *)arg1 ;
-(void)setSceneprintData:(NSData *)arg1 ;
-(SCD_Struct_PH9)imageDisplayTime;
-(void)setFaceCount:(unsigned long long)arg1 ;
-(NSString *)editorBundleID;
-(void)_prepareFaceIDsIfNeeded;
-(void)expungeTrashedSpatialOverCaptureResources;
-(void)setOriginalResourceChoice:(unsigned long long)arg1 ;
-(SCD_Struct_PH12)bestVideoTimeRange;
-(void)setPleasantSymmetryScore:(float)arg1 ;
-(float)exposureScore;
-(NSString *)title;
-(unsigned short)photoIrisVisibilityState;
-(void)setImmersivenessScore:(float)arg1 ;
-(NSDate *)modificationDate;
-(float)harmoniousColorScore;
-(void)setSceneClassifications:(id)arg1 algorithmVersion:(long long)arg2 adjustmentVersion:(id)arg3 ;
-(BOOL)isFavorite;
-(void)removeFaces:(id)arg1 ;
-(BOOL)validateAccessibilityDescription:(id)arg1 error:(id*)arg2 ;
-(void)setPleasantPostProcessingScore:(float)arg1 ;
-(void)setAutoplaySuggestionScore:(float)arg1 ;
-(void)setAddedDate:(NSDate *)arg1 ;
-(void)markDidChangeAdjustments;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(BOOL)validateAdjustmentDataForAssetMutation:(id)arg1 error:(id*)arg2 ;
-(BOOL)didChangeAdjustments;
-(BOOL)validateReadAccessForContentURL:(id)arg1 assetResource:(id)arg2 error:(id*)arg3 ;
-(void)setHidden:(BOOL)arg1 ;
-(float)blurrinessScore;
-(void)performCameraProcessingAdjustment;
-(void)setWellTimedShotScore:(float)arg1 ;
-(void)setPreferredCropRectWithNormalizedRect:(CGRect)arg1 ;
-(CLLocation *)shiftedLocation;
-(void)setSceneClassifications:(id)arg1 algorithmVersion:(long long)arg2 distanceIdentity:(id)arg3 adjustmentVersion:(id)arg4 ;
-(void)setBestVideoTimeRange:(SCD_Struct_PH12)arg1 ;
-(void)setMediaAnalysisTimeStamp:(NSDate *)arg1 ;
-(void)setImageDisplayTime:(SCD_Struct_PH9)arg1 ;
-(id)_mutableKeywordObjectIDsAndUUIDs;
-(void)removeFromMyPhotoStream;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)_validateAndGenerateStillImageForLoopingLivePhotoWithContentEditingOutput:(id)arg1 error:(id*)arg2 ;
-(NSData *)sceneprintData;
-(void)setPleasantLightingScore:(float)arg1 ;
-(BOOL)reverseLocationDataIsValid;
-(void)revertAssetContentToOriginal;
-(float)sharplyFocusedSubjectScore;
-(void)setLowLight:(float)arg1 ;
-(void)setVideoDuration:(SCD_Struct_PH9)arg1 ;
-(void)removeKeywords:(id)arg1 ;
-(void)setLivelyColorScore:(float)arg1 ;
-(unsigned long long)mediaAnalysisVersion;
-(void)_prepareFacesHelperWithFetchResult:(id)arg1 ;
-(void)setInterestingSubjectScore:(float)arg1 ;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)incrementShareCount;
-(void)_setOriginalAsset:(id)arg1 ;
-(void)setPleasantPerspectiveScore:(float)arg1 ;
-(float)behavioralScore;
-(float)pleasantLightingScore;
-(void)setRectWithNormalizedRect:(CGRect)arg1 forPackedRect:(long long*)arg2 forSetFlag:(BOOL*)arg3 ;
-(NSDate *)creationDate;
-(NSString *)assetDescription;
-(double)highlightVisibilityScore;
-(void)setNoiseScore:(float)arg1 ;
-(unsigned long long)originalResourceChoice;
-(void)setAccessibilityDescription:(NSString *)arg1 ;
-(NSDate *)mediaAnalysisTimeStamp;
-(PHContentEditingOutput *)contentEditingOutput;
-(BOOL)isRevertingContentToOriginal;
-(void)setAdjustmentData:(id)arg1 withRenderedJPEGData:(id)arg2 orRenderedContentURL:(id)arg3 penultimateRenderedJPEGData:(id)arg4 isSubstandardRender:(BOOL)arg5 fullSizeRenderSize:(CGSize)arg6 renderedVideoComplementURL:(id)arg7 penultimateRenderedVideoComplementURL:(id)arg8 ;
-(void)setWellChosenSubjectScore:(float)arg1 ;
-(BOOL)validateAssetDescription:(id)arg1 error:(id*)arg2 ;
-(void)setBehavioralScore:(float)arg1 ;
-(float)testScore;
-(BOOL)validateVideoURLForAssetMutation:(id)arg1 error:(id*)arg2 ;
-(void)setExposureScore:(float)arg1 ;
-(void)setReverseLocationDataIsValid:(BOOL)arg1 ;
-(NSSet *)keywordTitles;
-(void)untrashAllSpatialOverCaptureResources;
-(void)incrementPlayCount;
-(void)setVideoURLForUpdate:(NSURL *)arg1 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(void)setAdjustmentData:(id)arg1 withRenderedJPEGData:(id)arg2 orRenderedContentURL:(id)arg3 penultimateRenderedJPEGData:(id)arg4 isSubstandardRender:(BOOL)arg5 fullSizeRenderSize:(CGSize)arg6 renderedVideoComplementURL:(id)arg7 penultimateRenderedVideoComplementURL:(id)arg8 optionalOriginalResourceChoice:(id)arg9 ;
-(void)setPleasantCompositionScore:(float)arg1 ;
@end

