/**
 * Copyright 2017 Colin Doig.  Distributed under the MIT license.
 */

#ifndef REVOKEACCESSTOWEBAPPRESPONSE_H
#define REVOKEACCESSTOWEBAPPRESPONSE_H

#include <json/json.h>

#include "greentop/JsonResponse.h"
#include "greentop/account/enum/Status.h"

namespace greentop {

class RevokeAccessToWebAppResponse : public JsonResponse {
    public:
        RevokeAccessToWebAppResponse();

        RevokeAccessToWebAppResponse(const Status& status);

        virtual void fromJson(const Json::Value& json);

        virtual Json::Value toJson() const;

        virtual bool isValid() const;

        const Status& getStatus() const;
        void setStatus(const Status& status);


    private:

        Status status;
};

}

#endif // REVOKEACCESSTOWEBAPPRESPONSE_H
