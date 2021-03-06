/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXDocumentMetadataProviding.h>
#import <libobjc.A.dylib/SXDocumentTitleProviding.h>
#import <libobjc.A.dylib/SXDocumentLanguageProviding.h>
#import <libobjc.A.dylib/SXAutoPlacementProviding.h>

@protocol SXDocumentProviding;
@class SXMetadata, NSString;

@interface SXDocumentMetadataProvider : NSObject <SXDocumentMetadataProviding, SXDocumentTitleProviding, SXDocumentLanguageProviding, SXAutoPlacementProviding> {

	id<SXDocumentProviding> _documentProvider;

}

@property (nonatomic,readonly) id<SXDocumentProviding> documentProvider;              //@synthesize documentProvider=_documentProvider - In the implementation block
@property (nonatomic,readonly) SXMetadata * metadata; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) id<SXAutoPlacement> autoPlacement; 
-(id)initWithDocumentProvider:(id)arg1 ;
-(id<SXDocumentProviding>)documentProvider;
-(SXMetadata *)metadata;
-(NSString *)language;
-(NSString *)title;
@end

