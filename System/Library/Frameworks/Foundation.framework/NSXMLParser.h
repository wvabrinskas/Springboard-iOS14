/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Foundation/Foundation-Structs.h>
@class NSError, NSMutableArray, NSData, NSSet, NSURL;

@interface NSXMLParser : NSObject {

	id _reserved0;
	id _delegate;
	id _reserved1;
	id _reserved2;
	id _reserved3;
	xmlSAXHandler* _saxHandler;
	xmlParserCtxt* _parserContext;
	unsigned long long _parserFlags;
	NSError* _error;
	NSMutableArray* _namespaces;
	CFDictionaryRef _slowStringMap;
	BOOL _delegateAborted;
	BOOL _haveDetectedEncoding;
	NSData* _bomChunk;
	unsigned long long _chunkSize;
	NSSet* _allowedEntityURLs;
	NSURL* _url;
	unsigned long long _externalEntityResolvingPolicy;

}

@property (assign) id<NSXMLParserDelegate> delegate; 
@property (assign) BOOL shouldProcessNamespaces; 
@property (assign) BOOL shouldReportNamespacePrefixes; 
@property (assign) unsigned long long externalEntityResolvingPolicy; 
@property (copy) NSSet * allowedExternalEntityURLs; 
@property (copy,readonly) NSError * parserError; 
@property (assign) BOOL shouldResolveExternalEntities; 
+(id)currentParser;
+(void)setCurrentParser:(id)arg1 ;
-(BOOL)parseData:(id)arg1 ;
-(void)_initializeSAX2Callbacks;
-(id)initForIncrementalParsing;
-(long long)columnNumber;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)initWithStream:(id)arg1 ;
-(id)systemID;
-(BOOL)parse;
-(void)setAllowedExternalEntityURLs:(NSSet *)arg1 ;
-(void)setShouldContinueAfterFatalError:(BOOL)arg1 ;
-(NSError *)parserError;
-(void)_setParserError:(long long)arg1 ;
-(NSSet *)allowedExternalEntityURLs;
-(BOOL)shouldContinueAfterFatalError;
-(unsigned long long)externalEntityResolvingPolicy;
-(id<NSXMLParserDelegate>)delegate;
-(void)abortParsing;
-(BOOL)parseFromStream;
-(void)setShouldReportNamespacePrefixes:(BOOL)arg1 ;
-(void)setDelegate:(id<NSXMLParserDelegate>)arg1 ;
-(BOOL)_handleParseResult:(long long)arg1 ;
-(xmlParserInput*)_xmlExternalEntityWithURL:(const char*)arg1 identifier:(const char*)arg2 context:(xmlParserCtxt*)arg3 originalLoaderFunction:(/*function pointer*/void*)arg4 ;
-(BOOL)shouldProcessNamespaces;
-(void)_setExpandedParserError:(id)arg1 ;
-(void)_pushNamespaces:(id)arg1 ;
-(BOOL)shouldResolveExternalEntities;
-(void)setShouldResolveExternalEntities:(BOOL)arg1 ;
-(void)setExternalEntityResolvingPolicy:(unsigned long long)arg1 ;
-(long long)lineNumber;
-(id)initWithData:(id)arg1 ;
-(BOOL)shouldReportNamespacePrefixes;
-(void)setShouldProcessNamespaces:(BOOL)arg1 ;
-(id)publicID;
-(BOOL)finishIncrementalParse;
-(void)_popNamespaces;
-(void)dealloc;
@end
