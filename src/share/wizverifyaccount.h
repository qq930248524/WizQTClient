#ifndef WIZVERIFYACCOUNT_H
#define WIZVERIFYACCOUNT_H

#include "wizapi.h"

class CWizVerifyAccount : public CWizApiBase
{
    Q_OBJECT
public:
    CWizVerifyAccount(const CString& strAccountsApiURL);
    //
public:
    void verifyAccount(const CString& strUserId, const CString& strPassword);
private:
    CString m_strErrorMessage;
    CWizSyncEvents m_events;
public:
    virtual void onXmlRpcError(const CString& strMethodName, WizXmlRpcError err, int errorCode, const CString& errorMessage);
    virtual void onClientLogin();
    //
    virtual void addErrorLog(const CString& str);

Q_SIGNALS:
    void done(bool succeeded, const CString& errorMessage);
};


#endif // WIZVERIFYACCOUNT_H