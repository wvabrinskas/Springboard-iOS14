/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SSRVoiceProfileStoreCleaner : NSObject
-(id)_cleanupAppDomain:(id)arg1 ;
-(id)_cleanuplanguageCodePath:(id)arg1 forAppDomain:(id)arg2 ;
-(id)_cleanupOrphanedMetafilesForProfile:(id)arg1 payloadUtteranceLifeTimeInDays:(long long)arg2 ;
-(id)_cleanupImplicitUtteranceCacheForProfile:(id)arg1 ;
-(id)_cleanupContentsOfSatFolder:(id)arg1 ;
-(id)_cleanupOrphanedMetafilesAtURL:(id)arg1 ;
-(id)_cleanupPayloadUtterancesFromProfile:(id)arg1 forModelType:(unsigned long long)arg2 exceedingLifeTimeInDays:(long long)arg3 ;
-(id)_cleanupInvalidAudioFiles:(id)arg1 ;
-(void)_cleanupModelFilesAtDir:(id)arg1 forAssetArray:(id)arg2 ;
-(id)filterDuplicatedSiriProfilesFrom:(id)arg1 ;
-(id)filterInvalidSiriProfilesFrom:(id)arg1 ;
-(id)cleanupProfileStore;
-(void)cleanupInvalidModelsForProfile:(id)arg1 withAssetArray:(id)arg2 ;
@end
