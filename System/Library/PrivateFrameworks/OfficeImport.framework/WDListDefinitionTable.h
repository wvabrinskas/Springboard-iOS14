/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WDDocument, NSMutableArray, NSMutableDictionary, WDListDefinition;

@interface WDListDefinitionTable : NSObject {

	WDDocument* mDocument;
	NSMutableArray* mListDefinitions;
	NSMutableDictionary* mListDefinitionMapById;
	NSMutableDictionary* mListDefinitionMapByStyleId;
	WDListDefinition* mNullListDefinition;
	WDListDefinition* mDefaultListDefinition;

}
-(id)description;
-(id)initWithDocument:(id)arg1 ;
-(id)definitions;
-(id)addDefinitionWithDefinitionId:(int)arg1 styleId:(id)arg2 ;
-(id)resolvedDefinitionWithDefinitionId:(int)arg1 ;
-(id)definitionWithDefinitionId:(int)arg1 ;
-(id)definitionWithStyleId:(id)arg1 ;
@end
