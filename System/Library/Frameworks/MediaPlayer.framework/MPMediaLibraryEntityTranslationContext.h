/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MPMediaLibrary, NSArray, MPModelKind, NSString;

@interface MPMediaLibraryEntityTranslationContext : NSObject {

	BOOL _multiQuery;
	MPMediaLibrary* _mediaLibrary;
	NSArray* _allowedEntityIdentifiers;
	NSArray* _scopedContainers;
	unsigned long long _filteringOptions;
	MPModelKind* _modelKind;
	NSString* _personID;
	NSString* _filterText;

}

@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;                    //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) NSArray * allowedEntityIdentifiers;               //@synthesize allowedEntityIdentifiers=_allowedEntityIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * scopedContainers;                       //@synthesize scopedContainers=_scopedContainers - In the implementation block
@property (assign,getter=isMultiQuery,nonatomic) BOOL multiQuery;              //@synthesize multiQuery=_multiQuery - In the implementation block
@property (assign,nonatomic) unsigned long long filteringOptions;              //@synthesize filteringOptions=_filteringOptions - In the implementation block
@property (nonatomic,retain) MPModelKind * modelKind;                          //@synthesize modelKind=_modelKind - In the implementation block
@property (nonatomic,retain) NSString * personID;                              //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSString * filterText;                            //@synthesize filterText=_filterText - In the implementation block
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(void)setFilteringOptions:(unsigned long long)arg1 ;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(NSArray *)allowedEntityIdentifiers;
-(void)setAllowedEntityIdentifiers:(NSArray *)arg1 ;
-(BOOL)isMultiQuery;
-(NSArray *)scopedContainers;
-(MPModelKind *)modelKind;
-(void)setModelKind:(MPModelKind *)arg1 ;
-(void)setMultiQuery:(BOOL)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(void)setScopedContainers:(NSArray *)arg1 ;
-(unsigned long long)filteringOptions;
-(NSString *)filterText;
-(void)setFilterText:(NSString *)arg1 ;
@end
