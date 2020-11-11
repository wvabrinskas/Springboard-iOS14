/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DictionaryUI.framework/DictionaryUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface DUDictionaryManager : NSObject {

	BOOL _initiallyEmptyAssets;
	NSArray* _availableDefinitionDictionaries;

}

@property (readonly) NSArray * availableDefinitionDictionaries;              //@synthesize availableDefinitionDictionaries=_availableDefinitionDictionaries - In the implementation block
+(id)assetManager;
-(id)init;
-(BOOL)_hasDefinitionForTerm:(id)arg1 ;
-(NSArray *)availableDefinitionDictionaries;
-(id)_allAvailableDefinitionDictionaries;
-(id)_definitionValuesForTerm:(id)arg1 ;
-(id)_dictionaryAssetType;
-(id)_availableDictionaryAssets;
-(long long)_compareOrderOfDictionary:(id)arg1 withDictionary:(id)arg2 ;
-(void)_migrateInstalledStateForNewDictionaries:(id)arg1 ;
-(void)_downloadDictionaryAssetCatalogWithTimeout:(long long)arg1 completion:(/*^block*/id)arg2 ;
@end
